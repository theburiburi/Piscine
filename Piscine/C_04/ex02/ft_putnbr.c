/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 02:23:53 by uijo              #+#    #+#             */
/*   Updated: 2023/08/08 18:42:15 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putnbr(int nb)
{
	unsigned int	temp;
	int				length;
	char			a[10];
	char			c;

	length = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		temp = nb * (-1);
	}
	else
		temp = nb;
	if (temp == 0)
		write (1, "0", 1);
	while (temp > 0)
	{
		c = temp % 10 + '0';
		temp /= 10;
		a[length++] = c;
	}
	length--;
	while (length >= 0)
		write (1, &a[length--], 1);
}
