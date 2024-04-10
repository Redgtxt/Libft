/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:11:08 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:11:08 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    const char* s = (const char*)str;
    size_t i;

    i = 0;
    while(i < n)
    {
        if(s[i] == (char)c)
        {
             return  (char *)&s[i];
        }
        i++;
    }
    return NULL;
}
/*
int main() {
    char str[] = "Hello, world!";
    char *ptr;

    ptr = ft_memchr(str, 'e',19);

    printf("%s",ptr);
    return 0;
}
*/
