/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:34:18 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 12:34:20 by thtricar         ###   ########.fr       */
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

int	find_start_trim(char const *s1, char const *set)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (set[j] == s1[i])
				break;
			else
				j++;
		}
		if (!set[j])
			return i;
		i++;
		j = 0;
	}
	return i;
}

int	find_end_trim(char const *s1, char const *set)
{
	int	i;
	int	j;
	
	i = ft_strlen(s1) - 1;
	j = 0;
	while (i >= 0)
	{
		while (set[j])
		{
			if (set[j] == s1[i])
				break;
			else
				j++;
		}
		if (!set[j])
			return i;
		i--;
		j = 0;
	}
	return i;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trim;
	int		i;
	int	start;
	int	end;
	int	len;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	start = find_start_trim(s1, set);
	end = find_end_trim(s1, set);
	len = (end - start + 1);
	if (len <= 0)
		return NULL;
	s1_trim = malloc(sizeof(char) * ((len) + 1));
	if (s1_trim == NULL)
		return (NULL);
	ft_strncpy(s1_trim, &s1[start], (len));
}

int	main(void)
{
	char	buffer[12] = "Hello World";

	printf("nouvelle chaine : %s\n", ft_strtrim(buffer, " "));
	printf("nouvelle chaine : %s\n", ft_strtrim(buffer, "H, d"));
	printf("nouvelle chaine : %s\n", ft_strtrim(buffer, "H"));
	printf("nouvelle chaine : %s\n", ft_strtrim(NULL, "d"));
}






