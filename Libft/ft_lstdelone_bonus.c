/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:04:18 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 18:04:20 by thtricar         ###   ########.fr       */
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
