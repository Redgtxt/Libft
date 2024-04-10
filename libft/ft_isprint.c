/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:09:52 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:09:52 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
        return (1);
    return (0);
}

/*
#include <stdio.h>
int main(void)
{
      printf("%d ", ft_isprint(1));
}
*/
