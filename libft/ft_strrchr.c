#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    size_t i;

    i = ft_strlen(str);

        while(i > 0)
        {
            if(str[i] == c)
            {   
            return  (char *)&str[i];
            }
          i--;
        }
    return (NULL);
}

/*
#include <string.h>
int main(void)
{
    char str[] = "Hello, world!";
    char *ptr;
    char *ptrTrue;

   
    ptr = ft_strrchr(str, 'l');
     ptrTrue = strrchr(str, 'l');

    printf("Meu: %s\n",ptr);
    printf("True: %s\n",ptrTrue);
    return 0;
}
*/
