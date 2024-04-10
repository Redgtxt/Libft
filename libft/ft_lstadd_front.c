/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:10:12 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:12 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    //lst primeira node da lista
    //new cria um novo node
  if (!lst || !new) {
        return;
    }

    new->next = *lst;
    *lst = new;
}
