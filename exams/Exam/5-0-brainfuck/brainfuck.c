#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int str_ln = 0;
	while (str[str_ln] != 0)
		str_ln++;
	write (1, str, str_ln);
}

int		is_already(char *str, char c)
{
	int i = -1;
	while (str[++i] != 0)
		if(str[i] == c)
			return 1;
	return 0;
}

int		main(int ac, char **av)
{
	if(ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	int size1 = 0;
	int size2 = 0;
	int store_size = 0;
	int i = 0;
	int j = 0;
	int k = -1;
	while (av[1][size1] != 0)
		size1++;	
	while (av[2][size2] != 0)
		size2++;
	if (size1 == 0 || size2 == 0)
	{
		ft_putchar('\n');
		return 0;
	}
	if (size1 > size2)
		store_size = size2;
	else
		store_size = size1;
	char store[store_size];
	while (i < size1)
	{
		j = 0;
		while (j < size2)
		{
			if (av[1][i] == av[2][j] && !is_already(store, av[1][i]))
				store[++k] = av[1][i];
			j++;
		}
		i++;
	}
	store[++k] = '\0';
	ft_putstr(store);
	ft_putchar('\n');	
	return 0;
}