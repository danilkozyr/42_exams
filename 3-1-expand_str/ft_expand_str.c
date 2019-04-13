/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expand_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 16:43:42 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/17 16:43:43 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		exit_if_spaces_at_the_end(char *str, int i)
{
	while (str[i] == ' ')
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int		skip_spaces_and_put_three(char *str, int i)
{
	if (str[i] == ' ')
		return (1);
	return (0);
}

void	ft_expand_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
	{
		i++;
	}
	while (str[i] != '\0')
	{
		if (exit_if_spaces_at_the_end(str, i))
			return ;
		if (skip_spaces_and_put_three(str, i))
		{
			while (str[i] == ' ')
				i++;
			ft_putchar(' ');
			ft_putchar(' ');
			ft_putchar(' ');
		}
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
