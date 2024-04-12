/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:12:03 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:12:03 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_tokens(char const *s, char delimiter)
{
	size_t	tokens;
	size_t	i;
	int		inside_token;

	inside_token = 0;
	tokens = 0;
	i = 0;
	while (s[i])
	{
		inside_token = 0;
		while (s[i] == delimiter && s[i])
			i++;
		while (s[i] != delimiter && s[i])
		{
			if (!inside_token)
			{
				tokens++;
				inside_token = 1;
			}
			i++;
		}
	}
	return (tokens);
}

int	safe_malloc(char **tokens_v, int position, size_t buffer)
{
	tokens_v[position] = malloc(buffer);
	if (tokens_v[position] == NULL)
	{
		while (position > 0)
		{
			free(tokens_v[--position]);
		}
		free(tokens_v);
		return (1);
	}
	return (0);
}

int	fill(char **tokens_v, char const *s, char delimiter)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		len = 0;
		while (s[i] == delimiter && s[i])
			i++;
		while (s[i] != delimiter && s[i])
		{
			len++;
			i++;
		}
		if (len)
		{
			if (safe_malloc(tokens_v, j, len + 1))
				return (1);
			ft_strlcpy(tokens_v[j], &s[i - len], len + 1);
			j++;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	tokens;
	char	**tokens_v;

	if (s == NULL)
		return (NULL);
	tokens = count_tokens(s, c);
	tokens_v = malloc((tokens + 1) * sizeof(char *));
	if (tokens_v == NULL)
		return (NULL);
	tokens_v[tokens] = NULL;
	if (fill(tokens_v, s, c))
	{
		free(tokens_v);
		return (NULL);
	}
	return (tokens_v);
}

/*
// Contar as palavras || Tokens
// Alocar a memória
// Copiar os tokens para o lugar certo
*/
