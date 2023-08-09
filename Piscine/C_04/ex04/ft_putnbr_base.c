/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:43:44 by uijo              #+#    #+#             */
/*   Updated: 2023/08/10 06:36:23 by uijo             ###   ########.fr       */
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
	int				i;
	int				len;

	i = 0;
	len = check_base(base);
	if (len)
	{
		print_nb(nbr, base, &temp);
		while (temp != 0)
		{
			a[i++] = base[temp % len];
			temp /= len;
		}
		a[i] = '\0';
		while (i != 0)
			write(1, &a[--i], 1);
	}
}
