/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:34:20 by uijo              #+#    #+#             */
/*   Updated: 2023/08/02 18:34:06 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	len;

	len = 0;
	index = 0;
	while (src[len])
		len++;
	if (size != 0)
	{
		while (src[index] && (index + 1) < size)
		{
			dest[index] = src[index];
			index ++;
		}
		dest[index] = '\0';
	}
	return (len);
}
