#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
    unsigned char *p = (unsigned char *)str;//Tirar do void para ser manipulado com mais facilidade
    size_t i;

    i = 0;
    while(i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return str;
}

/*
int main() {
    char str[50] = "Hello, World!"; // String de exemplo para demonstrar o uso de memset

    printf("Original string: %s\n", str);

    // Usando memset para preencher os primeiros 5 caracteres da string com '*'
    memset(str, '*', 5);

    printf("Modified string: %s\n", str);

    return 0;
}
*/