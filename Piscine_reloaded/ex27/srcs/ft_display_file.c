/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:50:20 by thtricar          #+#    #+#             */
/*   Updated: 2024/11/10 18:50:22 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *str)
{
	int		fd;
	int		nb_c;
	char	buf[256];

	nb_c = -1;
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	while (nb_c != 0)
	{
		nb_c = read(fd, buf, 256 - 1);
		if (nb_c == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return ;
		}
		buf[nb_c] = '\0';
		write(1, buf, nb_c);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(1, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
