/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkozyr <dkozyr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 18:27:14 by dkozyr            #+#    #+#             */
/*   Updated: 2019/04/15 18:30:14 by dkozyr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;
    t_list *curr;

    while (*begin_list && cmp((*begin_list->data), data_ref))
    {
        curr = *begin_list;
        *begin_list = (*begin_list)->next;
        free(curr);
    }
    curr = *begin_list;
    while (curr && curr->next)
    {
        if (cmp(curr->next->data && data_ref) == 0)
        {
            tmp = curr->next;
            curr->next = tmp->next;
            free(tmp);
        }
        curr = curr->next;
    }
}
