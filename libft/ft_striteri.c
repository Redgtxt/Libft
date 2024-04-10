/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:12:31 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:12:31 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void ft_striteri(char *s,void (*f)(unsigned int,char*))
{
    unsigned int i;

    if (!s)
        return ;

    i = 0;
    while(s[i] != '\0')
    {
        f(i,s + i);
        i++;
    }

}
