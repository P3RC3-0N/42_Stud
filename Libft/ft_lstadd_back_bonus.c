/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:03:05 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:03:07 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_node;
	
	if (!lst || !new)
		return;
	tmp_node = *lst;
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = new;
}
