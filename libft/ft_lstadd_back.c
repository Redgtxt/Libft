#include "libft.h"

void ft_lstadd_back(t_list **lst,t_list *new)
{
 t_list *temp;

    temp = ft_lstlast(*lst);
    //Se e nulo(esta vazia)
    if(!temp)
    {
        *lst = new;
    }else{
        temp ->next = new;
    }
}
