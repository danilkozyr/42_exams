/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:46:56 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/08 18:46:57 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (str1[i] != '\0')
	{
		while (str2[++j] != '\0')
		{
			if (str1[i] == str2[j] && str1[i + 1] == '\0')
			{
				ft_putstr(str1);
				ft_putchar('\n');
				return ;
			}
			else if (str1[i] == str2[j])
			{
				break ;
			}
		}
		i++;
	}
	ft_putchar('\n');
}
