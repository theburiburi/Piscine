/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 05:56:58 by uijo              #+#    #+#             */
/*   Updated: 2023/08/08 14:48:06 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	mark;

	i = 0;
	num = 0;
	mark = 1;
	while (is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mark *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
		num = num * 10 + str[i++] - '0';
	num *= mark;
	return (num);
}
