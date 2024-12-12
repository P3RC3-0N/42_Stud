/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:04:55 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:04:56 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void	ft_lstiter(t_list *lst, void (*f) (void *))
{
	t_list	*tmp_node;
	
	if (!lst || !f)
		return ;
	tmp_node = lst;
	while (tmp_node->next != NULL)
	{
		f(tmp_node);
		tmp_node = tmp_node->next;
	}
	f(tmp_node);
}
