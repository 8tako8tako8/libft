/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:35:15 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/11 20:35:45 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	dst1 = (char *)dst;
	src1 = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if ((unsigned char)src1[i] == (unsigned char)c)
			return (dst1 + i + 1);
		i++;
	}
	return (NULL);
}
