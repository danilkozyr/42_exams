/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 14:37:24 by dkozyr            #+#    #+#             */
/*   Updated: 2019/04/15 17:42:00 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int		count_words(char *str)
{
	int count;
	int i;

	count = 0;
	i = -1;
	while (str[++i] != '\0')
		if ((is_space(str[i - 1]) && !is_space(str[i]))
		|| (!is_space(str[0]) && i == 0))
			count++;
	return (count);
}

char	*trim(char *str, int i)
{
	int		j;
	int		end;
	char	*s;

	j = 0;
	end = 0;
	while (str[end + 1] != '\0')
		end++;
	s = (char *)malloc(sizeof(char) * (end + 2));
	while (is_space(str[end]))
		end--;
	while (is_space(str[i]))
		i++;
	while (str[i] != '\0' && i < end + 1)
		s[j++] = str[i++];
	s[j] = '\0';
	return (s);
}

void	print(char *s)
{
	int i;
	int start;

	start = -1;
	i = -1;
	while (!is_space(s[++start]))
		i++;
	i++;
	while (s[++i] != '\0')
	{
		if (is_space(s[i]))
		{
			while (is_space(s[i]))
				i++;
			write(1, " ", 1);
		}
		write(1, &s[i], 1);
	}
	i = -1;
	write(1, " ", 1);
	while (++i < start)
		write(1, &s[i], 1);
}

void	solve(char *str)
{
	char	*s;
	int		i;
	int		count;

	i = 0;
	s = trim(str, i);
	count = count_words(s);
	i = -1;
	if (count == 1)
		while (s[++i] != '\0')
			write(1, &s[i], 1);
	else
		print(s);
}
