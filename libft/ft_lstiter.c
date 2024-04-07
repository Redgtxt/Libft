#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
      while (lst != NULL)
       {
        // Apply the function f to the content of the current node
        (*f)(lst->content);
        // Move to the next node
        lst = lst->next;
    }
}