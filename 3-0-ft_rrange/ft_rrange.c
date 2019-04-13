/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:06:58 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/17 18:06:58 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int *res;
	int i;

	if (start > end)
		return (NULL);
	res = (int*)malloc(sizeof(res) * (end - start));
	while (end > start)
	{
		res[i] = end;
		i++;
		end--;
	}
	return (res);
}
