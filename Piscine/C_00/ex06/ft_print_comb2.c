/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:39:19 by uijo              #+#    #+#             */
/*   Updated: 2023/07/26 20:45:28 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"

void	ft_print_comb2(void);

void	ft_intchar(int i)
{
	char	c;

	c = i / 10 + '0';
	write (1, &c, 1);
	c = i % 10 + '0';
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	front;
	int	back;

	front = 0;
	back = 0;
	while (front <= 98)
	{
		back = front + 1;
		while (back <= 99)
		{
			ft_intchar(front);
			write(1, " ", 1);
			ft_intchar(back);
			if (!(front == 98))
				write(1, ", ", 2);
			back++;
		}
		front++;
	}
}
