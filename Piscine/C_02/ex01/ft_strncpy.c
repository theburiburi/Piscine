/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:26:35 by uijo              #+#    #+#             */
/*   Updated: 2023/08/01 22:40:43 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n)
	{
		if (src[index] != '\0')
			dest[index] = src[index];
		else
		{
			while (index < n)
			{
				dest[index] = '\0';
				index ++;
			}
		}
		index ++;
	}
	return (dest);
}
