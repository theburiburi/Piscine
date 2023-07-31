/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:26:35 by uijo              #+#    #+#             */
/*   Updated: 2023/07/31 17:42:34 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index ++;
	}
	dest[index] = '\n';
	return (dest);
}
