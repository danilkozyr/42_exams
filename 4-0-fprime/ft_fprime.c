/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprime.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:25:56 by dkozyr            #+#    #+#             */
/*   Updated: 2019/01/11 17:25:57 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int nb)
{
	int i;

	i = 1;
	if (nb == i)
	{
		printf("1");
		return ;
	}
	while (nb > 1)
	{
		i++;
		if (nb % i == 0)
		{
			printf("%d", i);
			nb = nb / i;
			if (nb != 1)
				printf("*");
			i = 1;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_fprime(atoi(argv[1]));
	printf("\n");
	return (1);
}
