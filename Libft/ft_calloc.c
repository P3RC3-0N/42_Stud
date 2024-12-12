/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:49:57 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/12 12:50:00 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	
	if (!nmemb || !size)
		return NULL;
	tab = malloc(sizeof(size) * nmemb);
	if (tab == NULL)
		return NULL;
	return tab;
}
