
void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*prev_item;
	t_list	*item;
	t_list	*next_item;

	prev_item = begin_list;
	if (prev_item && (prev_item->next))
    {
        item = prev_item->next;
        next_item = item->next;
//        prev_item->next = 0;
        item->next = prev_item;
        while (next_item)
        {
            prev_item = item;
            item = next_item;
            next_item = next_item->next;
            item->next = prev_item;
        }
        begin_list = item;
    }
}