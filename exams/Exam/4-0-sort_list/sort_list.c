#include <stdlib.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*item;
	t_list	*tmp_a;
	t_list	*tmp_b;
	t_list	*prev_item;
	t_list	*next_item;

	item = *begin_list;
	prev_item = *begin_list;
	while (item->next)
	{
		if ((*cmp)(item->data, item->next->data) > 0)
		{
			tmp_a = item;
			tmp_b = item->next;
			after = tmp_b->next;
			prev_item->next = tmp_b;
			tmp_b->next = tmp_a;
			tmp_a->next = after;
			item = tmp_b;
		}
		else
			item = item->next;
	}
}