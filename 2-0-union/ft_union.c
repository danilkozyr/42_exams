/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:45:19 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/08 19:45:19 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		was_not_before(char *str, int i)
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

int		was_not_yet(char *str1, char *str2, int j)
{
	int i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[j])
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		if (was_not_before(str1, i))
			ft_putchar(str1[i]);
		i++;
	}
	while (str2[j] != '\0')
	{
		if (was_not_before(str2, j) && was_not_yet(str1, str2, j))
			ft_putchar(str2[j]);
		j++;
	}
	ft_putchar('\n');
}
