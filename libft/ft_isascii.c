#include "libft.h"

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
        return (1);
    return (0);
}
/*
#include <stdio.h>
int main(void)
{
      printf("%d",ft_isascii('A'));
      printf("%d",ft_isascii('z'));
      printf("%d",ft_isascii('0'));
      printf("%d",ft_isascii('-'));
}
*/