#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *newDest = (unsigned char *)dest;
    unsigned char *newSrc = (unsigned char *)src;
    size_t i;

    i = 0;
    while(i < n)
    {
        newDest[i] = newSrc[i];
        i++;
    }

    return dest;
}

/*
int main() {
    char src[] = "Texto de exemplo";
    char dest[50]; // Garantindo que temos espaço suficiente

    // Copiando o conteúdo de src para dest
    ft_memcpy(dest, src, sizeof(src));

    // Imprimindo o conteúdo de dest para verificar a cópia
    printf("Conteudo de src: %s\n", src);
    printf("Conteudo copiado para dest: %s\n", dest);

    return 0;
}
*/