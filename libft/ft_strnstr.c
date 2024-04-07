#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t h;
    size_t n;

    
    n = 0;
    if(!(*haystack || *needle))
        return ((char*)haystack);

    h = 0;
    while(haystack[h] != '\0' && h < len)
    {
        while(haystack[h + n] == needle[n] && haystack[h + n] && (h + n) < len)
        n++;
        if(!(needle[n]))
            return((char*) haystack + h);
        h++;
    }
    return NULL;
}
