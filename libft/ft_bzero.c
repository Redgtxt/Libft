#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
/*
int main(void)
{
    char str[] = "Bom dia";
    printf("%s\n",str);
    ft_bzero(str,5);
    printf("VV: %s",str);
}
*/