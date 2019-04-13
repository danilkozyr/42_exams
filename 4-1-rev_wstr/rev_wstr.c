/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 17:19:28 by dkozyr            #+#    #+#             */
/*   Updated: 2019/04/13 17:48:00 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

void	solve(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (i != -1)
	{
		if ((!ft_is_space(str[i]) && ft_is_space(str[i - 1]))
		|| (!ft_is_space(str[i]) && i == 0))
		{
			j = i;
			while (!ft_is_space(str[j]) && str[j] != '\0')
			{
				write(1, &str[j], 1);
				j++;
			}
		}
		if (ft_is_space(str[i]))
			write(1, &str[i], 1);
		i--;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		solve(argv[1]);
	write(1, "\n", 1);
}
