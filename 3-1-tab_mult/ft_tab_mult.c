/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_mult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 17:42:01 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/17 17:42:01 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int res;
	int i;
	int min;

	res = 0;
	i = 0;
	min = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res * min);
}

void	ft_putnbr(int a)
{
	if (a < 0)
	{
		ft_putchar('-');
		ft_putnbr(a * (-1));
	}
	else if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
		ft_putchar(a + '0');
}

void	print_result(int a)
{
	int i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(a);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(i * a);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_result(ft_atoi(argv[1]));
	else
		ft_putchar('\n');
	return (0);
}
