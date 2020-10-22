/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:51:28 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/21 14:56:37 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (haystack[0] == '\0')
		return (NULL);
	if (needle[0] == '\0')
		return (char *)(haystack);
	if (ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	needle_len = ft_strlen(needle);
	i = 0;
	while (len >= i + needle_len && haystack[i] != '\0')
	{
		if ((ft_strncmp(haystack + i, needle, needle_len)) == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
