/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:24:29 by dkozyr            #+#    #+#             */
/*   Updated: 2019/01/11 18:24:30 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	isvalid(char c, int base)
{
	char digits1[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while (base--)
	{
		if (digits1[base] == c || digits2[base] == c)
			return (1);
	}
	return (0);
}

int current(char c)
{
	int nb;

	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	res;
	int min;

	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	min = *str == '-' ? -1 : 1;
	if (*str == '-' || *str == '+')
		str++;
	while (isvalid(*str, str_base))
	{
		res = res * str_base + current(*str++);
	}
	return (res * min);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		printf("result: %d\n", ft_atoi_base(argv[1], atoi(argv[2])));
	return (1);
}
