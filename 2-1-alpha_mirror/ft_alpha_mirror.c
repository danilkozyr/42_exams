/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpha_mirror.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:37:20 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/08 16:37:21 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

void	ft_alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_upper(str[i]))
			ft_putchar('Z' - str[i] + 'A');
		else if (ft_is_lower(str[i]))
			ft_putchar('z' - str[i] + 'a');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_alpha_mirror(argv[1]);
	ft_putchar('\n');
	return (0);
}
