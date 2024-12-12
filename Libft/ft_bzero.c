/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:04:17 by thtricar          #+#    #+#             */
/*   Updated: 2024/11/18 16:04:19 by thtricar         ###   ########.fr       */
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
		*(head + i) = (unsigned char) c;
		i++;
	}
	return (s);
}

void	bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);	
}
