/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:54:26 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 10:54:29 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	printf("bn");
	if (c == 0)
		return (&s[i]);
	else
		return (NULL);
}

int	main(void)
{
	char buffer[12] = "Hello World";
	
	printf("res : %s\n", ft_strrchr(buffer, 'l'));
	printf("res : %s\n", ft_strrchr(buffer, 'e'));
	printf("res : %s\n", ft_strrchr(buffer, 'z'));
	printf("res : %s\n", ft_strrchr(buffer, 0));
	printf("res : %s\n", strrchr(buffer, 'l'));
	printf("res : %s\n", strrchr(buffer, 'e'));
	printf("res : %s\n", strrchr(buffer, 'z'));
	printf("res : %s\n", strrchr(buffer, 0));
	return 0;
}
