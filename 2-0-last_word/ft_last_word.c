/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:20:50 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/08 14:20:52 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_ascii(char c)
{
	return (c >= 33 && c <= 126);
}

void	ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i - 1] == ' ')
		i--;
	while (ft_is_ascii(str[i - 1]))
		i--;
	while (ft_is_ascii(str[i]))
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
