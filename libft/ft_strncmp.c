#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    while ((str1[i] != '\0' && str2[i] != '\0') && (i < n))
    {
        if(str1[i] != str2[i])
            return ((unsigned char) str1[i] - (unsigned char) str2[i]);
        i++;
    }
    return (0);
}
/*
int main(void)
{
     // Caso 1: Strings iguais
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Caso 1: %d\n", ft_strncmp(str1, str2, 5));

    // Caso 2: Strings diferentes com uma sendo prefixo da outra
    char str3[] = "Hello";
    char str4[] = "Hello, World!";
    printf("Caso 2: %d\n", ft_strncmp(str3, str4, 10));

    // Caso 3: Strings diferentes com diferença no começo
    char str5[] = "Apple";
    char str6[] = "Apricot";
    printf("Caso 3: %d\n", ft_strncmp(str5, str6, 5));

    // Caso 4: Strings diferentes com diferença após alguns caracteres
    char str7[] = "Football";
    char str8[] = "Footwear";
    printf("Caso 4: %d\n", ft_strncmp(str7, str8, 7));

    // Caso 5: Comparação insensível ao tamanho especificado (n)
    char str9[] = "123456";
    char str10[] = "123abc";
    printf("Caso 5: %d\n", ft_strncmp(str9, str10, 3)); // n é menor do que a diferença

    // Caso 6: Comparação de strings vazias
    char str11[] = "";
    char str12[] = "";
    printf("Caso 6: %d\n", ft_strncmp(str11, str12, 5));

    return 0;
}
*/