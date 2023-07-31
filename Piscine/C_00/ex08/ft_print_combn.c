/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:49:21 by uijo              #+#    #+#             */
/*   Updated: 2023/07/26 20:49:27 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_print_combn(int n);

void	ft_recursion(int n, const int time, char *arr, int start)
{
	if (n == 0)
		return ;
	while (arr[start] <= '9' - n + 1)
	{
		if (start != time - 1)
			arr[start + 1] = arr[start] + 1;
		ft_recursion (n - 1, time, arr, start + 1);
		if (start == time - 1)
		{
			write (1, arr, time);
			if (!(arr[0] == '9' - time + 1))
				write (1, ", ", 2);
		}
		arr[start]++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	arr[0] = '0';
	ft_recursion(n, n, arr, 0);
}
