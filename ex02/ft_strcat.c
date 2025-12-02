/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwoo <lwoo@student.42bangkok.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:25:30 by lwoo              #+#    #+#             */
/*   Updated: 2025/07/22 03:31:48 by lwoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	length;
	int	i;

	length = str_length(dest);
	i = 0;
	while (*src)
	{
		dest[length + i] = *src;
		i++;
		src++;
	}
	dest[length + i] = '\0';
	return (dest);
}
