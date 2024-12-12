/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:13:13 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 10:05:22 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char 	*head_dest = (char *)dest;
	char 	*head_src = (char *)src;

	while (n-- > 0)
	{
		*(head_dest++) = *(head_src++);
	}
	return (dest);
}

int	main(void)
{
	char buffer[] = "Hello World";
	char tmp[12];
	
	strcpy(tmp, buffer);
	printf("tmp : %s\n", tmp);
	printf("ft_cpy : %s\n", ft_memcpy(tmp + 5, tmp, 7));
	strcpy(tmp, buffer);
	printf("cpy : %s\n", memcpy(tmp + 5, tmp, 7));
	strcpy(tmp, buffer);
	printf("move : %s\n", memmove(tmp + 5, tmp, 7));
	strcpy(tmp, buffer);
	


	
	return 0;
}
