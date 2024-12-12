/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:48:44 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 11:48:46 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char 	*head_s = (unsigned char *)s;
	unsigned char	u_c = c;
	unsigned int	i;

	i = 0;
	while (head_s[i])
	{
		if (head_s[i] == u_c)
			return (&head_s[i]);
		i++;
	}
	return (NULL);

}

int	main(void)
{
	char buffer[12] = "Hello World";
	
	printf("res : %s\n", ft_memchr(buffer, 'e', 7));
	printf("res : %s\n", ft_memchr(buffer, 'z', 7));
	printf("res : %s\n", ft_memchr(buffer, 0, 7));
	printf("res : %s\n", memchr(buffer, 'e', 7));
	printf("res : %s\n", memchr(buffer, 'z', 7));
	printf("res : %s\n", memchr(buffer, 0, 7));
	return 0;
}
