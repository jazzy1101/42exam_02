#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	tmp;
	int	swap;

	tmp = list;
	while (lst->next)
	{
		if (!((*cmp)(lst->data, lst->next->data)))
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = list->next;
	}
	lst = tmp;
	return lst;
}
