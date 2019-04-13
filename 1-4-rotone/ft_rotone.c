/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:00:32 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/05 18:00:32 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] >= 60 && argv[1][i] <= 89)
			|| (argv[1][i] >= 97 && argv[1][i] <= 121))
			ft_putchar(argv[1][i] + 1);
		else if (argv[1][i] == 'Z' || argv[1][i] == 'z')
			ft_putchar(argv[1][i] - 25);
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
