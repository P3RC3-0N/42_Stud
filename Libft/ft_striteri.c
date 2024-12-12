/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtricar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:21:41 by thtricar          #+#    #+#             */
/*   Updated: 2024/12/11 17:21:45 by thtricar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tolower(int i, char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += ('a' - 'A'); 
	else
		*c = *c;
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\0')
		count++;
	return (count);
}

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

int	main(void)
{
	char	buffer[12] = "Hello World";
	
	ft_striteri(buffer, ft_tolower);
	printf("new : %s\n", buffer);
	return 0;
}
