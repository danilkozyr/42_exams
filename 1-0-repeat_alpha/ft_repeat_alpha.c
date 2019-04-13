/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:53:42 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/05 16:27:36 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	logic(char *argv)
{
	int	i;
	int count;
	int j;

	i = 0;
	while (argv[i] != '\0')
	{
		j = 0;
		if (argv[i] >= 65 && argv[i] <= 90)
		{
			count = argv[i] - 64;
			while (j++ < count)
				ft_putchar(argv[i]);
		}
		else if (argv[i] >= 97 && argv[i] <= 122)
		{
			count = argv[i] - 96;
			while (j++ < count)
				ft_putchar(argv[i]);
		}
		else
			ft_putchar(argv[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int count;
	int j;

	i = 0;
	count = 1;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	logic(argv[1]);
	ft_putchar('\n');
	return (0);
}
