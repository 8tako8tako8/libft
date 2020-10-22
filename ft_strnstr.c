/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:51:28 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/21 23:49:04 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return (char*)(haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (char*)(haystack + i);
		}
		i++;
	}
	return (NULL);
}
