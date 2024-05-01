/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:12:59 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:12:59 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Create a new string by modifying the string with a specified function.*/
char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*newstr;

	if (!s)
		return (NULL);
	newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
 void function_f_striteri(unsigned int nr,char *str)
    {
        if(str && nr)
            *str = ft_toupper(*str);
    }

int main()
{
    char str_striteri[10] = "ABCDefgh";

    ft_striteri(str_striteri, function_f_striteri);
    printf("New: %s", str_striteri);
    return 0;
}
*/