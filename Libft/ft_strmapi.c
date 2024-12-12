/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:10:46 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 16:10:49 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_tolower(int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A')); 
	else
		return c;
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char	*new_s;
	
	i = 0;
	new_s = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_s == NULL)
		return NULL;
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	return new_s;
}

int	main(void)
{
	printf("new : %s\n", ft_strmapi("BONjour", ft_tolower));
	return 0;
}
