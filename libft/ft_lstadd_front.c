#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    //lst primeira node da lista
    //new cria um novo node
  if (!lst || !new) {
        return;
    }

    new->next = *lst;
    *lst = new;
}   
