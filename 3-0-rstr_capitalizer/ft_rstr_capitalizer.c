/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rstr_capitalizer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:21:30 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/17 17:21:30 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_if_lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

int		check_if_uppercase(char c)
{
	return (c >= 65 && c <= 90);
}

void	ft_rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_if_lowercase(str[i]) && str[i + 1] == ' ')
			str[i] = str[i] - 32;
		else if (check_if_uppercase(str[i]) && str[i + 1] != ' '
			&& str[i + 1] != '\0')
			str[i] = str[i] + 32;
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
