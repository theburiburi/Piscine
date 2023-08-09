/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:43:44 by uijo              #+#    #+#             */
/*   Updated: 2023/08/08 19:01:25 by uijo             ###   ########.fr       */
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

void	print_nb(int nbr, char *base, unsigned int *temp)
{	
	if (nbr < 0)
	{
		write(1, "-", 1);
		*temp = nbr * -1;
	}
	else if (nbr == 0)
		write(1, &base[0], 1);
	else
		*temp = nbr;
}

void	ft_putnbr_base(int nbr, char *base)
{	
	unsigned int	temp;
	char			a[32];
	int				len[2];

	len[0] = 0;
	len[1] = check_base(base);
	if (len[1])
	{
		print_nb(nbr, base, &temp);
		while (temp != 0)
		{
			a[len[0]++] = base[temp % len[1]];
			temp /= len[1];
			if (temp < len[1])
			{
				a[len[0]++] = base[temp];
				temp /= len[1];
			}
		}
		a[len[0]] = '\0';
		while (len[0] != 0)
			write(1, &a[--len[0]], 1);
	}
}
