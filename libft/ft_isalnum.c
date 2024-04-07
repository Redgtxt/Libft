#include "libft.h"

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c))
        return 1;
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
      printf("%d",ft_isalnum('A'));
      printf("%d",ft_isalnum('z'));
      printf("%d",ft_isalnum('0'));
      printf("%d",ft_isalnum('#'));
}
*/