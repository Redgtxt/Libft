/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:07:15 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:07:15 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	convert_num;
	convert_num = 1;
	int	i;
	i = 0;
	int	number;
	number = 0;
	int	count_sign;
	count_sign = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (count_sign > 0)
			return (0);

		if (str[i] == '-')
			convert_num *= -1;

		count_sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + str[i] - '0';
		i++;
	}
	return (number * convert_num);
}

/*
#include <stdlib.h>





int	main(void)
{
	char *str = "-2";
	printf(" True: %d\n",atoi(str));
	printf(" Meu: %d\n",ft_atoi(str));
}
*/
