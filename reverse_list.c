t_list	*reverse_lst(t_list		*lst_point)
{
	t_list		*new;
	new = NULL;
	while (lst_point != NULL)
	{
		t_list		*next;
		next = lst_point->next;
		lst_point->next = new;
		new = lst_point;
		lst_point = next;
	}
	return (new);
}
