/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:13:31 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:13:31 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *substr;

    if(!s)
        return NULL;

    i = ft_strlen(s);
    if (start >= i) // if start is greater than or equal to the length of the string
        return ft_strdup(""); // return an empty string

    i = start;
    while(i  < len + start  && s[i] != '\0')
        i++;

    substr = malloc((len + 1) * sizeof(char));
    if(!substr)
        return NULL;


 //i - start e amplitude para descobrir mos quantos caracteres vao ser copiados
    ft_strlcpy(substr,s + start,i - start + 1);

    return substr;
}

/*
int main()
{
    char str[] = "Cbum";
    unsigned int start = 2; // Posição inicial
    size_t length = 3; // Comprimento da substring desejada

    // Chamando a função ft_substr
    char *sub = ft_substr(str, start, length);

    if (sub == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    printf("Substring: %s\n", sub);

    // Liberando a memória alocada para a substring
    free(sub);

    return 0;
}
*/
