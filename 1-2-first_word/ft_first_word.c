/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:16:12 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/05 18:16:12 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		check_params(int argc)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = -1;
	if (check_params(argc) == 1)
		return (0);
	while (argv[1][++i] != '\0')
	{
		if (is_alpha(argv[1][0]) == 1 && i == 0)
			ft_putchar(argv[1][i]);
		else if (is_alpha(argv[1][i]) == 1 && argv[1][i + 1] == ' ')
		{
			ft_putchar(argv[1][i]);
			ft_putchar('\n');
			return (0);
		}
		else if (is_alpha(argv[1][i]) == 1)
			ft_putchar(argv[1][i]);
		else if (argv[1][i] == ' ')
			continue ;
		else
			ft_putchar(argv[1][i]);
	}
	ft_putchar('\n');
	return (0);
}
