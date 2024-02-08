/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtoroyan <vtoroyan@student.42yerevan.am>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 21:12:23 by vtoroyan          #+#    #+#             */
/*   Updated: 2024/01/27 20:25:04 by vtoroyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		count;

	if (ft_isascii(c))
	{
		count = ft_strlen(str);
		while (count != 0 && str[count] != c)
			count--;
		if (str[count] == c || c == '\0')
			return ((char *)&str[count]);
	}
	else
		return ((char *)str);
	return (NULL);
}
