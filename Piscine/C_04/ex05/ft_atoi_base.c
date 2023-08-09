/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:20:55 by uijo              #+#    #+#             */
/*   Updated: 2023/08/10 03:52:47 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

unsigned int	check_base(char *base)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	while (base[length])
	{
		i = length + 1;
		while (base[i])
		{
			if (base[length] == base[i])
				return (0);
			i++;
		}
		if (base[length] == '+' || base[length] == '-')
			return (0);
		length++;
	}
	if (length < 2)
		return (0);
	return (length);
}

int	to_decimal(char *str, char *base, int len)
{
	int	i;
	int	j;
	int	num;
	int	check;

	i = 0;
	num = 0;
	while (str[i])
	{
		check = 1;
		j = 0;
		while (base[j] && check)
		{
			if (str[i] == base[j])
			{
				num = num * len + j;
				check = 0;
			}
			j++;
		}
		if (check == 1)
			return (num);
		i++;
	}
	return (num);
}

int	ft_atoi(char *str, char *base, int len)
{
	int	i;
	int	num;
	int	mark;

	i = 0;
	num = 0;
	mark = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			mark *= -1;
		str++;
	}
	while (base[i++])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((9 <= base[i] && base[i] <= 13) || base[i] == 32)
			return (0);
	}
	num = to_decimal(str, base, len) * mark;
	return (num);
}

int	ft_atoi_base(char *str, char *base)
{
	int	length;

	length = check_base(base);
	return (ft_atoi(str, base, length));
}
