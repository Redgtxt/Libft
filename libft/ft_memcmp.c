#include "libft.h"


int	ft_memcmp(void *dest, const void *src, size_t n)
{
    const unsigned char* d = (const unsigned char*)dest;
    const unsigned char* s = (const unsigned char*)src;
    size_t i;

    i = 0;
    while(i < n)
    {
        if(d[i] != s[i])
        {
            return( d[i] - s[i]);
        }
        i++;
    }
    return (0);
}

/*
int main() {
    char str1[] = "Hello";
    char str2[] = "Hellp";
    int result;
    result = ft_memcmp(str1, str2, 5);
   
        printf("%d",result);
    

    return 0;
}
*/