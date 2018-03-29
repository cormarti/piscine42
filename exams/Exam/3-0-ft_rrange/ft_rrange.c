#include <stdlib.h>

int		*ft_rrange(int min, int max)
{
	int		diff;
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	tab = (int*)malloc(sizeof(*tab) * (diff + 1));
	while (min <= max)
	{
		tab[i] = max;
		max--;
		i++;
	}
	return (tab);
}