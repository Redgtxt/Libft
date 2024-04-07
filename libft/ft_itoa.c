#include "libft.h"

static int ft_len(int n)
{
    size_t count;

    count = 0;
    if(n <= 0)
        count++;
    
    while(n)
    {
        count++;
        n /= 10;
    }
    return (count);
}


char *ft_itoa(int n)
{
    char    *ptr;
    int     len;

    len = ft_len(n);
    ptr = malloc(len + 1);
    if(ptr == NULL)
        return (NULL);
    ptr[len] = '\0';
    if(n == 0)
        ptr[0] = '0';
    else if (n < 0)
        ptr[0] = '-';
    while(n)
    {
        if(n < 0)
            ptr[len--] = (~(n % 10) + 1) + 48;
        else
             ptr[len--] = (n % 10) + 48;
        n /= 10;
    }
    return (ptr);
}

