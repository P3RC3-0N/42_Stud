/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:39:42 by thtricar          #+#    #+#             */
/*   Updated: 2024/06/28 13:48:57 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}
/*
int	main(void)
{
	char	*str2;

	str2 = "salut";
	ft_putstr(str2);
}*/
