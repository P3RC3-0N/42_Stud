/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:03:56 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:03:57 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_ltlast(t_list *lst)
{
	t_list	*tmp_node;
	
	if (!lst)
		return 0;
	tmp_node = lst;
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	return tmp_node;
}
