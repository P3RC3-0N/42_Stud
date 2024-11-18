/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:35:07 by thtricar          #+#    #+#             */
/*   Updated: 2024/07/04 18:35:09 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	length;

	i = 1;
	j = 0;
	while (i < argc)
	{
		length = ft_strlen(argv[i]);
		while (j < length)
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		j = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
