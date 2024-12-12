/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:56:25 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 11:56:27 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char 	*head_s1 = (char *)s1;
	char 	*head_s2 = (char *)s2;
	int	i;
	
	i = 0;
	while ((head_s1[i] || head_s2[i]) && i < n)
	{
		if (head_s1[i] != head_s2[i])
			return (head_s1[i] - head_s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	
	printf("res : %d\n", ft_memcmp("Hello World", "", 12));
	printf("res : %d\n", ft_memcmp("Hello World", "Hello Woa", 12));
	printf("res : %d\n", ft_memcmp("Hello Woa", "Hello World", 3));
	printf("res : %d\n", memcmp("Hello World", "", 12));
	printf("res : %d\n", memcmp("Hello World", "Hello Woa",12));
	printf("res : %d\n", memcmp("Hello Woa", "Hello World", 3));
	
	return 0;
}
