#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp = *begin_list;

	if (!begin_list || !*begin_list)
		return ;
	
	if(!cmp(tmp->data, data_ref))
	{
		*begin_list = tmp->next;
		free(tmp);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		tmp = *begin_list;
		ft_list_remove_if(&tmp->next, data_ref, cmp);
	}
}
