/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uijo <uijo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:02:26 by uijo              #+#    #+#             */
/*   Updated: 2023/08/01 22:40:56 by uijo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_lowcase(char *str)
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

int	ft_check(char *str, int index)
{
	int	check;

	check = 0;
	if (!('a' <= str[index] && str[index] <= 'z'))
	{
		if (!('A' <= str[index] && str[index] <= 'Z'))
		{
			if ('0' <= str[index] && str[index] <= '9')
				check = 0;
			else
				check = 1;
		}
	}
	return (check);
}

char	*ft_strcapitalize(char *str)
{
	int	check;
	int	index;

	ft_str_lowcase(str);
	check = 1;
	index = 0;
	while (str[index] != '\0')
	{
		if (check)
			if ('a' <= str[index] && str[index] <= 'z')
				str[index] = str[index] - 'a' + 'A';
		check = ft_check(str, index);
		index++;
	}
	return (str);
}
