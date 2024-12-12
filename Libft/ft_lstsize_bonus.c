/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:03:28 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:03:30 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

typedef struct	s_list
{
	void	*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;
	
	new_list = malloc(sizeof(t_list) * 1);
	if (new_list == NULL)
		return NULL;
	new_list->content = content;
	new_list->next = NULL;
	return new_list;
}

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*tmp_node;
	
	count = 0;
	if (!lst)
		return 0;
	tmp_node = lst;
	count++;
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
		count++;
	}
	return count;
}

int	main(void)
{
	int content = 5;
	t_list	*new_list = ft_lstnew(&content);
	printf("taille : %d\n", ft_lstsize(new_list));
	
	return 0;
}
