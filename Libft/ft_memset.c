/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:36:05 by thtricar          #+#    #+#             */
/*   Updated: 2024/11/18 15:36:36 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	char	*head;
	
	i = 0;
	head = (char *)s;

	while (i < (int)n)
	{
		*(head + i) = (unsigned char c)c;
		i++;
	}
	return (s);
}
