/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <lwoo@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 03:53:27 by lwoo              #+#    #+#             */
/*   Updated: 2025/07/22 21:20:52 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_substring(char *src, char *substring)
{
	int	i;

	i = 0;
	while (*substring)
	{
		if (*src == *substring)
			i = 1;
		else
		{
			i = 0;
			break ;
		}
		src++;
		substring++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str)
	{
		if (*str == to_find[0])
			i = is_substring (str, to_find);
		if (i == 1)
			return (str);
		str++;
	}
	return (str);
}
