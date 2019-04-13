/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:07:10 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/05 18:07:10 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	i = ft_strlen(argv[1]) - 1;
	while (i != -1)
	{
		ft_putchar(argv[1][i]);
		i--;
	}
	ft_putchar('\n');
	return (0);
}
