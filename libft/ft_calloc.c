/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:08:43 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:08:43 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
    void *ptr;

    ptr = malloc(n * size);

    if(ptr == NULL)
        return NULL;

    ft_bzero(ptr,n * size);
    return ptr;
}
