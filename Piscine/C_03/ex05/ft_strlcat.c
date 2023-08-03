/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:03:14 by uijo              #+#    #+#             */
/*   Updated: 2023/08/03 23:06:38 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	i;

	i = 0;
	d_len = 0;
	s_len = 0;
	while (dest[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (size <= d_len)
		return (s_len + size);
	else
	{
		while (d_len + i + 1 < size && src[i])
		{	
			dest[d_len + i] = src[i];
			i++;
		}
		dest[d_len + i] = 0;
		return (s_len + d_len);
	}
}
