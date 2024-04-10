/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:10:32 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:32 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
      while (lst != NULL)
       {
        // Apply the function f to the content of the current node
        (*f)(lst->content);
        // Move to the next node
        lst = lst->next;
    }
}
