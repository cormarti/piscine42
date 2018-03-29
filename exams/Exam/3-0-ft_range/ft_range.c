#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		diff;
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	tab = (int*)malloc(sizeof(*tab) * (diff + 1));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}