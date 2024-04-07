#include "libft.h"

char * ft_strdup(const char *str1)
{
    char *new;
    size_t lenght;
    int i;

    lenght = ft_strlen(str1);

    new = malloc((lenght + 1) * sizeof(char));

    if(new == NULL)
        return NULL;
    
    i = 0;
    while(str1[i] != '\0')
    {
        new[i] = str1[i];
        i++;
    }
    new[i] = '\0';
    return new;
}

/*
#include <stdio.h>
int main(void)
{
    char texto[] = "Bom dia";
    printf("%s",ft_strdup(texto));
}
*/