#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
     if (!s1 || !s2)
        return NULL;
    size_t s1_len = ft_strlen(s1);
    size_t s2_len = ft_strlen(s2);
    char *newStr = malloc((s1_len + s2_len + 1) * sizeof(char));
    if (newStr == NULL)
        return NULL;
    ft_strlcpy(newStr, s1, s1_len + 1);
    ft_strlcat(newStr, s2, s1_len + s2_len + 1);
    return newStr;

}

int main(void)
{
    char s1[] = "Bom    ";
    char s2[] = "Dia";
    char *juntos = ft_strjoin(s1,s2);

    printf("%s",juntos);
}

