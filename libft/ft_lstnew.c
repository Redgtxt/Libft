/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguerrei <hguerrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:10:51 by hguerrei          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:51 by hguerrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

t_list *ft_lstnew(void *content)
{
    //Vou ter de apontar para o content
    //Retorna a nova node
    t_list *ret;
    ret = malloc(sizeof(t_list));
    if(!ret)
        return NULL;
    ret -> content = content;
    ret -> next = NULL;

    return ret;
}


/*
int main() {
    // Cria um novo nó com conteúdo "Hello, world!"
    t_list *node = ft_lstnew("Hello, world!");

    // Verifica se o nó foi criado corretamente
    if (node != NULL) {
        // Imprime o conteúdo do nó
        printf("Content of the node: %s\n", (char *)node->content);

        // Libera a memória alocada para o nó
        free(node);
    } else {
        // Se não foi possível criar o nó, imprime uma mensagem de erro
        printf("Error: Unable to create the node\n");
    }

    return 0;
}
*/
