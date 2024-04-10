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
   char	*substr;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
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
