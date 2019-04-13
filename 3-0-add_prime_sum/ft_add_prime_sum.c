/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_prime_sum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 15:31:57 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/16 15:38:39 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int res;
	int i;

	i = 0;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		return (0);
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return (res);
}

void	ft_putnbr(int a)
{
	int res;

	res = 0;
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	else
	{
		res = a + 48;
		write(1, &res, 1);
	}
}

int		ft_is_prime(int a)
{
	int b;

	b = 2;
	if (a == 1)
		return (0);
	while (b < a)
	{
		if (a % b == 0)
			return (0);
		b++;
	}
	return (1);
}

int		ft_add_prime_sum(int a)
{
	int res;
	int	i;

	i = 0;
	res = 0;
	while (i <= a)
	{
		if (ft_is_prime(i))
			res = res + i;
		i++;
	}
	return (res);
}

int		main(int argc, char **argv)
{
	int a;

	a = ft_atoi(argv[1]);
	if (argc == 2 && a != 0)
	{
		ft_putnbr(ft_add_prime_sum(a));
	}
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
