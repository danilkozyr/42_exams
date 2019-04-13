/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_epur_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 17:19:21 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/16 17:19:22 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		delete_spaces_in_beginning(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == 't')
		i++;
	return (i);
}

int		check_if_end_of_string(char *str, int i)
{
	while (str[i] == ' ')
	{
		if (str[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

void	display_epur_str(char *str)
{
	int i;

	i = 0;
	i = delete_spaces_in_beginning(str);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
			i++;
		if (check_if_end_of_string(str, i))
			return ;
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		display_epur_str(argv[1]);
	ft_putchar('\n');
	return (0);
}
