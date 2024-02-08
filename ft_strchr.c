/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:52:58 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 20:24:30 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		count;

	count = 0;
	if (ft_isascii(c))
	{
		while (str[count] != '\0' && str[count] != c)
			count++;
		if (str[count] == c || c == '\0')
			return ((char *)&str[count]);
	}
	else
		return ((char *)str);
	return (NULL);
}
