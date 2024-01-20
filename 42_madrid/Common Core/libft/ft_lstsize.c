#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count = 0;
    t_list *temp = lst;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}