/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:40:47 by dkozyr            #+#    #+#             */
/*   Updated: 2018/11/08 15:40:47 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_do_op(char *str1, char *operand, char *str2)
{
	int	first_oper;
	int	second_oper;

	first_oper = ft_atoi(str1);
	second_oper = ft_atoi(str2);
	if (*operand == '+')
		return (first_oper + second_oper);
	else if (*operand == '-')
		return (first_oper - second_oper);
	else if (*operand == '%')
		return (first_oper % second_oper);
	else if (*operand == 47)
		return (first_oper / second_oper);
	else if (*operand == 42)
		return (first_oper * second_oper);
}
