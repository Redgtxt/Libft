/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:11:02 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:11:02 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
int	main(void) {

	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	//Connecta
	node1->next = node2;
	node2->next = node3;

	// Conta os nós
	int node_count = ft_lstsize(node1);

	// Imprime a contagem
	printf("Numero de nodes: %d\n", node_count);

	// Libera a memória
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/
