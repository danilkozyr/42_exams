/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 20:07:59 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/08 20:07:59 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		was_before(char *str, int i)
{
	int k;

	k = 0;
	while (k < i)
	{
		if (str[k] == str[i])
			return (0);
		k++;
	}
	return (1);
}

void	ft_inter(char *str1, char *str2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str1[i] != '\0')
	{
		if (was_before(str1, i))
		{
			j = 0;
			while (str2[j] != '\0')
			{
				if (str1[i] == str2[j])
				{
					ft_putchar(str1[i]);
					break ;
				}
				j++;
			}
		}
		i++;
	}
	ft_putchar('\n');
}
