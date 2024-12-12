/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:37:20 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 10:37:23 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A')); 
	else
		return c;
}

int	main(void)
{
	printf("d : %c, $ : %c\n", ft_tolower('D'), ft_tolower('$'));
	return 0;
}
