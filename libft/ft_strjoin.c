#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *newStr;

    if(!s1 || !s2)
        return NULL;

    newStr = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
    if(newStr == NULL)
        return NULL;
    i = 0;
    while(s1[i] != '\0')
    {
        newStr[i] = s1[i];
          i++;
    }

     j = 0;
     while(s2[j] != '\0')
    {
        newStr[i + j] = s2[j];
          j++;
    }
    newStr[i + j] = '\0';
    return newStr;
}
/*
#include <stdio.h>
int main(void)
{
    char s1[] = "Bom ";
    char s2[] = "Dia";
    char *juntos = ft_strjoin(s1,s2);

    printf("%s",juntos);
}
*/