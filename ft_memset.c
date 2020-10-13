/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 20:14:49 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/11 20:29:56 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*buf;

	i = 0;
	buf = (char *)b;
	while (i < len)
	{
		buf[i] = c;
		i++;
	}
	return (b);
}
