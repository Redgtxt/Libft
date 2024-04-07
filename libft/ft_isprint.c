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