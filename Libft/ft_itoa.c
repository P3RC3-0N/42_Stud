/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:17:21 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 13:17:23 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_nbrc(int nbr)
{
	unsigned int	pow;
	int				count;
	unsigned int	nbr_u;

	pow = 10;
	count = 0;
	if (nbr < 0)
	{
		nbr_u = -nbr;
		count++;
	}
	else
		nbr_u = nbr;
	while (nbr_u > pow)
	{
		pow *= 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa_recursive(unsigned int nbr_u, char *str)
{
	int	i;

	i = 0;
	if (nbr_u / 10 != 0)
	{
		ft_itoa_recursive(nbr_u / 10, str);
		while (str[i])
			i++;
		str[i] = (nbr_u % 10) + '0';
		str[i + 1] = '\0';
	}
	else
	{
		while (str[i])
			i++;
		printf("nbr_u : %d\n", nbr_u);
		str[i] = (nbr_u % 10) + '0';
		str[i + 1] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	unsigned int	n_u;
	int	len;
	
	len = ft_nbrc(n);
	printf("len : %d\n", len);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	
	if (n < 0)
	{
		n_u = -n;
		str[0] = '-';
		str[1] = '\0';
	}
	else
	{
		n_u = n;
		str[0] = '\0';
	}
	ft_itoa_recursive(n_u, str);
}

int	main(void)
{
	printf("num : %s\n", ft_itoa(0));
	return (0);
}
