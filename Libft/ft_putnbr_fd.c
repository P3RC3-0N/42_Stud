/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:52:32 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 17:52:33 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr(int n, int fd)
{	
	unsigned int	nbr_u;

	if (n < 0)
	{
		write(1, "-", 1);
		nbr_u = (unsigned int) -n;
	}
	else
	{
		nbr_u = (unsigned int) n;
	}
	if (nbr_u / 10 > 0)
	{
		ft_putnbr(nbr_u / 10);
	}
	ft_putchar_fd(nbr_u % 10 + 48, fd);
}
