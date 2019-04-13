/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_capitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 20:29:52 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/07 20:33:49 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_str_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'a' && str[i] <= 'z' && i == 0))
			ft_putchar(str[i] - 32);
		else if (((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
				(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
				(str[i - 1] >= '0' && str[i - 1] <= '9')) &&
				((str[i] >= 'A' && str[i] <= 'Z')))
			ft_putchar(str[i] + 32);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_str_capitalize(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
