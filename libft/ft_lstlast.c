/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/04/10 13:10:38 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:38 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int	main(void) {

	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 534");


	node1->next = node2;
	node2->next = node3;

	// Encontra o último nó
	t_list *last_node = ft_lstlast(node1);



		printf("Last node:  %s\n", (char *)last_node->content);


	// Libera a memória
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/
