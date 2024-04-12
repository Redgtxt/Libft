/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:11:38 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:11:38 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*
int	main(void) {
	char str[50] = "Hello, World!";
		// String de exemplo para demonstrar o uso de memset

	printf("Original string: %s\n", str);

	// Usando memset para preencher os primeiros 5 caracteres da string com '*'
	memset(str, '*', 5);

	printf("Modified string: %s\n", str);

	return (0);
}
*/
