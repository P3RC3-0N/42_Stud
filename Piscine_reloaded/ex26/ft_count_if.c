/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:34:33 by thtricar          #+#    #+#             */
/*   Updated: 2024/11/10 18:34:36 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}*/

int	ft_count_if(char **tab, int (*f) (char*))
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}

/*
int	main(void)
{
	printf("bonjour");
	char *tab[] = {"bonjour", "1", "2", "bonsoir", 0};
	printf("bonjour");
	printf("nombre : %d\n", ft_count_if(tab, ft_strlen));
	return 0;
}*/
