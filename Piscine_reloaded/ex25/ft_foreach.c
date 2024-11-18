/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:24:57 by thtricar          #+#    #+#             */
/*   Updated: 2024/11/10 18:26:48 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{	
	unsigned int	nbr_u;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr_u = (unsigned int) -nbr;
	}
	else
	{
		nbr_u = (unsigned int) nbr;
	}
	if (nbr_u / 10 > 0)
	{
		ft_putnbr(nbr_u / 10);
	}
	ft_putchar(nbr_u % 10 + 48);
}*/

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, ft_putnbr);
	return 0;
}*/
