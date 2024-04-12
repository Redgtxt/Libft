/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:13:20 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:13:20 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
		i--;
	}
	if (str[i] == (unsigned char)c)
		return ((char *)str + i);
	return (NULL);
}

/*
#include <string.h>

int	main(void)
{
	char str[] = "Hello, world!";
	char *ptr;
	char *ptrTrue;


	ptr = ft_strrchr(str, 'l');
		ptrTrue = strrchr(str, 'l');

	printf("Meu: %s\n",ptr);
	printf("True: %s\n",ptrTrue);
	return (0);
}
*/
