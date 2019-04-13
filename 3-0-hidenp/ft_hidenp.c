/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hidenp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 18:13:17 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/16 18:13:17 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_hidenp(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] == str2[j] && str1[i + 1] == '\0')
			return (1);
		else if (str1[i] == str2[j])
			i++;
		j++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (ft_hidenp(argv[1], argv[2]))
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
