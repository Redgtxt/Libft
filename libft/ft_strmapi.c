#include "libft.h"

char *ft_strmapi(char *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *newstr;

    if(!s)
        return NULL;    
    
    newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
        if(!newstr)
            return NULL;
    i = 0;
    while(s[i] != '\0')
    {
        newstr[i] = f(i,s[i]);
        i++;
    }
    newstr[i] = '\0';
    return newstr;
}

