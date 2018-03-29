#include "ft_list.h"

int		ft_list_size(t_list *item)
{
	if (item)
		return (1 + ft_list_size(item->next));
	return (0);
}