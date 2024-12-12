/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:31:19 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 10:31:25 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - ('a' - 'A')); 
	else
		return c;
}

int	main(void)
{
	printf("d : %c, $ : %c\n", ft_toupper('d'), ft_toupper('$'));
	return 0;
}
