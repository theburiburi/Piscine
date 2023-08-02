/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:43:10 by uijo              #+#    #+#             */
/*   Updated: 2023/08/01 14:38:08 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ('A' <= str[index] && str[index] <= 'Z')
			index ++;
		else if ('a' <= str[index] && str[index] <= 'z')
			index ++;
		else
			return (0);
	}
	return (1);
}
