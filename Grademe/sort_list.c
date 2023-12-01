t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	tmp = 0;
	t_list	swap;

	if (lst)
	{
		swap = lst;
		while (lst->next)
		{
			if (!(*cmp)(lst->data, lst->next->data))
			{
				tmp = lst->data;
				lst->data = lst->next->data;
				lst->next->data = tmp;
				lst = swap;
			}
			else
				lst = lst->next;
		}
	}
	lst = swap;
	return lst;	
}
