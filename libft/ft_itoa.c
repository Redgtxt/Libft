/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:09:59 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:09:59 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int ft_len(int n)
{
    size_t count;

    count = 0;
    if(n <= 0)
        count++;

    while(n != 0)
    {
        count++;
        n /= 10;
    }
    return (count);
}

// n = 123 / 10 = 12 | count = 1;
// n = 12 / 10 = 1 | count = 2;
// n = 1 / 10 = 0 | count = 3;
// returnar (count);

char *ft_itoa(int n) // n = -123
{ //E unsigned int para nao estourar o buffer com o numero minimo do INT
     char    *ptr;
    int     len;
    unsigned int num;

    len = ft_len(n);
    ptr = malloc(len + 1);
    if(ptr == NULL)
        return (NULL);
    ptr[len] = '\0';
    if(n == 0)
    {
        ptr[0] = '0';
        return ptr;
    }
    else if (n < 0)
    {
        ptr[0] = '-';
        num = (unsigned int)(n * -1);
    }
    else
        num = (unsigned int)n;
    while(num)
    {
        ptr[--len] = (num % 10) + 48;
        num /= 10;
    }
    return (ptr);
}

/*
int main()
{
    char *teste = ft_itoa(-123445);
    printf("%s\n", teste);
    printf("%c\n", teste[2]);
}
*/

