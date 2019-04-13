/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:11:29 by dkozyr            #+#    #+#             */
/*   Updated: 2018/12/17 18:13:21 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_SIZE_H
# define FT_LIST_SIZE_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
