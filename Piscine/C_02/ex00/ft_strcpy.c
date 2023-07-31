/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:05:22 by uijo              #+#    #+#             */
/*   Updated: 2023/07/31 17:25:05 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	length;

	length = 0;
	while (src[length] != '\n')
	{
		dest[length] = src[length];
		length ++;
	}
	dest[length] = '\n';
	return (dest);
}
