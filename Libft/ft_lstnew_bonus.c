/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:02:23 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:02:25 by thtricar         ###   ########.fr       */
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

int	main(void)
{
	int content = 5;
	t_list	*new_list = ft_lstnew(&content);
	printf("adresse : %p, content : %d, next : %p\n", new_list, *(int *)(new_list->content), new_list->next);
	
	return 0;
}
