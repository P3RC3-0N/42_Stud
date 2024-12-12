/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:09:49 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 12:09:51 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	int		i;

	i = 0;
	new_s = malloc(sizeof(char) * (len + 1));
	if (new_s == NULL || s == NULL || start > ft_strlen(s))
		return (NULL);
	ft_strncpy(new_s, &s[start], len);
}

int	main(void)
{
	char	buffer[12] = "Hello World";

	printf("nouvelle chaine : %s\n", ft_substr(buffer, 3, 5));
	printf("nouvelle chaine : %s\n", ft_substr(buffer, 3, 13));
	printf("nouvelle chaine : %s\n", ft_substr(buffer, 3000, 5));
	printf("nouvelle chaine : %s\n", ft_substr(NULL, 3000, 5));
}
