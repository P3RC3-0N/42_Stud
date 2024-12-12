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

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dup_src;
	int		i;

	i = 0;
	dup_src = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup_src == NULL)
		return (NULL);
	while (src[i])
	{
		dup_src[i] = src[i];
		i++;
	}
	dup_src[i] = '\0';
	return (dup_src);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char 	*head_dest = (char *)dest;
	char 	*head_src = (char *)src;
	char	*head_src_dup = ft_strdup(head_src);

	while (n-- > 0)
	{
		*(head_dest++) = *(head_src_dup++);
	}
	return (dest);
}

int	main(void)
{
	char buffer[] = "Hello World";
	char tmp[12];
	
	strcpy(tmp,buffer);
	printf("tmp : %s\n", tmp);
	printf("ft_move1 : %s\n", ft_memmove(tmp + 5, tmp, 7));
	strcpy(tmp,buffer);
	printf("cpy : %s\n", memcpy(tmp + 5, tmp, 7));
	strcpy(tmp,buffer);
	printf("move : %s\n", memmove(tmp + 5, tmp, 7));
	strcpy(tmp,buffer);


	
	return 0;
}
