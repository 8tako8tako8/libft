/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorimot <kmorimot@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 23:04:33 by kmorimot          #+#    #+#             */
/*   Updated: 2020/10/11 23:04:42 by kmorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*curr_lst;

	tmp = NULL;
	curr_lst = *lst;
	while (curr_lst != NULL)
	{
		tmp = curr_lst;
		curr_lst = curr_lst->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = curr_lst;
	*lst = NULL;
}
