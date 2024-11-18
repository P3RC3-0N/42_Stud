/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:03:58 by thtricar          #+#    #+#             */
/*   Updated: 2024/06/27 12:13:41 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	lettre;

	lettre = 'a';
	while (lettre <= 'z' )
	{
		ft_putchar(lettre);
		lettre++;
	}
}
