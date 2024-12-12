/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:04:40 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:04:41 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void	ft_lstdelone(t_list *lst, void (*del) (void*))
{
	if (!lst)
		return ;
	del(lst);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*tmp_node;
	
	if (!lst)
		return ;
	while ((*lst)->next != NULL)
	{
		tmp_node = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp_node, del);
	}
}
