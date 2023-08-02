/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:56:46 by uijo              #+#    #+#             */
/*   Updated: 2023/08/01 17:01:16 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ('A' <= str[index] && str[index] <= 'Z')
		{
			str[index] = str[index] - 'A' + 'a';
		}
		index++;
	}
	return (str);
}
