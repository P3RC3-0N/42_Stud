/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:42:11 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 10:42:14 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (c == 0)
		return (&s[i]);
	else
		return (NULL);
}

int	main(void)
{
	char buffer[12] = "Hello World";
	
	printf("res : %s\n", ft_strchr(buffer, 'e'));
	printf("res : %s\n", ft_strchr(buffer, 'z'));
	printf("res : %s\n", ft_strchr(buffer, 0));
	printf("res : %s\n", strchr(buffer, 'e'));
	printf("res : %s\n", strchr(buffer, 'z'));
	printf("res : %s\n", strchr(buffer, 0));
	return 0;
}
