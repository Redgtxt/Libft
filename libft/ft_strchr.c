#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    size_t i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == (unsigned char)c)
        {
            return  (char *)&str[i];
        }
        i++;
    }
    if ((unsigned char)c == '\0')
    {
        return (char *)&str[i];
    }
    return NULL;
}

/*

int main() {
    char str[] = "Hello, world!";
    char *ptr;

    ptr = ft_strchr(str, 'x');

    printf("%s",ptr);
    return 0;
}
*/