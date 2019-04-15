/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 13:41:51 by dkozyr            #+#    #+#             */
/*   Updated: 2019/04/15 14:30:40 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
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

char	*create_word(char *str, int start)
{
	char	*word;
	int		i;
	int		j;

	i = start;
	j = 0;
	word = (char *)malloc(sizeof(char) * (i - start + 1));
	while (str[i] != '\0' && !(is_space(str[i])))
	{
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**s;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = count_words(str);
	s = (char **)malloc(sizeof(char*) * (words + 1));
	while (is_space(str[i]))
		i++;
	while (str[i] != '\0')
	{
		s[j] = create_word(str, i);
		j++;
		while (!is_space(str[i]))
			i++;
		while (is_space(str[i]))
			i++;
	}
	s[j] = NULL;
	return (s);
}
