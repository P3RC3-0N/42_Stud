/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:19:54 by thtricar          #+#    #+#             */
/*   Updated: 2024/06/27 12:43:48 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	figure;

	figure = '0';
	while (figure <= '9' )
	{
		ft_putchar(figure);
		figure++;
	}
}
