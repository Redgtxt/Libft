/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:13:14 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:13:14 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Searches for the first occurrence of a substring in a string,
 limiting the search to a maximum number of characters.*/
char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(small) == 0)
		return ((char *)(big));
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == small[j] && small[j] && i + j < len)
			j++;
		if (j >= ft_strlen(small))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
