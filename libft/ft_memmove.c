#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
 
       char *newDest = (  char *)dest;
       const char *newSrc = (const char *)src;
   
   
    if(newSrc > newDest)
    {
         i = 0;
         while(i < n)
        {
            newDest[i] = newSrc[i];
            i++;
        }
    }else if(newDest > newSrc)
   {
        while(n > 0)
        {
            n--;
            newDest[n] = newSrc[n];
        }
   }
   return newDest;
}
