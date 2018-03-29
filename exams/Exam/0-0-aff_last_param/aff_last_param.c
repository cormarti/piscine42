#include <unistd.h>

char	print_param(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, str[i], 1);
	write(1, "\n", 1);
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "\n", 1);
	else
		print_param(argv[argc - 1]);
	return (0);
}
