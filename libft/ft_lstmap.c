#include "libft.h"

t_list *ft_lstmap(t_list *lst,void *(*f)(void *),void (*del)(void *))
{
    t_list *head;
    t_list *temp;

    head = NULL;
    while(lst)
    {
        temp = ft_lstnew((*f)(lst -> content));
        if(!temp)
        {
            ft_lstclear(&head,del);
            return(NULL);
        }
        ft_lstadd_back(&head,temp);
        lst = lst -> next;
    }
    return (head);
}