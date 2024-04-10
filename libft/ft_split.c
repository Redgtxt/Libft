/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:12:03 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:12:03 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t count_tokens(char const *s, char delimiter) {
    size_t tokens = 0;
    size_t i = 0;
    int inside_token = 0; // Flag

    while (s[i] != '\0') {
        inside_token = 0;
        // Passa por todos os delimitadores
        while (s[i] == delimiter && s[i] != '\0')
            i++;
        // Está em uma palavra
        while (s[i] != delimiter && s[i] != '\0') {
            if (!inside_token) {
                tokens++;
                inside_token = 1;
            }
            i++;
        }
    }
    return tokens;
}

int safe_malloc(char **tokens_v, int position, size_t buffer) {
    tokens_v[position] = malloc(buffer);
    if (tokens_v[position] == NULL) {
        while (position > 0) {
            free(tokens_v[--position]);
        }
        free(tokens_v);
        return 1;
    }
    return 0;
}

int fill(char **tokens_v, char const *s, char delimiter) {
    size_t i = 0;
    size_t j = 0;
    size_t len;

    while (s[i] != '\0') {
        len = 0;
        // Passa pelos delimitadores
        while (s[i] == delimiter && s[i] != '\0')
            i++;
        // Calculate the len
        while (s[i] != delimiter && s[i] != '\0') {
            len++;
            i++;
        }
        if (len) {
            if (safe_malloc(tokens_v, j, len + 1))
                return 1;
            ft_strlcpy(tokens_v[j], &s[i - len], len + 1);
            j++;
        }
    }
    return 0;
}

char **ft_split(char const *s, char c) {
    // Contar as palavras || Tokens
    // Alocar a memória
    // Copiar os tokens para o lugar certo

    size_t tokens;
    char **tokens_v;

    if (s == NULL)
        return NULL;

    tokens = count_tokens(s, c);
    tokens_v = malloc((tokens + 1) * sizeof(char *));
    if (tokens_v == NULL)
        return NULL;

    tokens_v[tokens] = NULL;

    // Cpy all the stings in the correct order
    if (fill(tokens_v, s, c)) {
        free(tokens_v);
        return NULL;
    }
    return tokens_v;
}