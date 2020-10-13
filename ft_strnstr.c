/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:51:28 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/13 11:04:13 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*str1;
	const char	*str2;

	str1 = haystack;
	str2 = needle;
	if (needle[0] == '\0' && len == 0)
		return ((char *)str1);
	i = 0;
	while (str1[i] != '\0' && i < len)
	{
		j = 0;
		while (str2[j] != '\0' && str1[i + j] == str2[j] && i + j < len)
			j++;
		if (str2[j] == '\0')
			return ((char *)str1 + i);
		i++;
	}
	return (NULL);
}
