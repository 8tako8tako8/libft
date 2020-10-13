/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 23:02:34 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/11 23:02:48 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*curr_lst;

	curr_lst = *lst;
	if (curr_lst == NULL)
		*lst = new;
	else
	{
		while (curr_lst->next != NULL)
			curr_lst = curr_lst->next;
		curr_lst->next = new;
	}
}
