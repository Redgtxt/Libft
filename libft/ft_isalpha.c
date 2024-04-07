#include "libft.h"

int	ft_isalpha(int c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    
    return (0);
}

/*
#include <stdio.h>
int main(void)
{
    printf("%d",ft_isalpha('A'));
      printf("%d",ft_isalpha('z'));
      printf("%d",ft_isalpha('0'));
      printf("%d",ft_isalpha('"'));
}
*/
