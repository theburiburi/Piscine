/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:59:58 by uijo              #+#    #+#             */
/*   Updated: 2023/08/02 14:52:54 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_hexa(unsigned char c)
{
	write (1, "\\", 1);
	write (1, &"0123456789abcdef"[c / 16], 1);
	write (1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (32 <= str[index] && str[index] <= 126)
			write(1, &str[index], 1);
		else
			ft_hexa(str[index]);
		index++;
	}
}
