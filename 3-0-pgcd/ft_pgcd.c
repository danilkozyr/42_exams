/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pgcd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 18:24:01 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/16 18:24:02 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int res;
	int min;
	int i;

	min = 1;
	res = 0;
	i = 0;
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
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else if (a < 0)
	{
		ft_putchar('-');
		ft_putnbr(a * (-1));
	}
	else
		ft_putchar(a + 48);
}

void	run(char *str1, char *str2)
{
	int a;
	int b;
	int res;
	int	i;

	a = ft_atoi(str1);
	b = ft_atoi(str2);
	i = 1;
	while (i <= a || i <= b)
	{
		if (a % i == 0 && b % i == 0)
			res = i;
		i++;
	}
	ft_putnbr(res);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		run(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
