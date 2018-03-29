#include <unistd.h>
#define ABS(x) ((x > 0) ? x : -x)

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	unsigned int res;

	res = (unsigned int)ABS(nb);
	if (nb < 0)
		ft_putchar('-');
	if (res >= 10)
		ft_putnbr(res / 10);
	ft_putchar((res % 10) + '0');
}

int		ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
		i++;
	sign = ((str[i] == '-') ? -1 : 1);
	if ((str[i] == '-') || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (sign * res);
}

int		is_op(char c)
{
	if (!(c == '+' || c == '-' || c == '/' || c == '*' || c == '%'))
		return (0);
	return (1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		calculate(int x, int y, char op)
{
	int		i;
	int		(*ope[5])(int, int);
	char	*op_list;

	ope[0] = sum;
	ope[1] = sub;
	ope[2] = mult;
	ope[3] = div;
	ope[4] = mod;
	op_list = "+-*/%";
	i = 5;
	while (i--)
		if (op == op_list[i])
			return ((ope[i])(x, y));
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (ft_strlen(av[2]) == 1 && is_op(av[2][0]))
	{
		if (ft_atoi(av[3]) == 0 && (av[2][0] == '/' || av[2][0] == '%'))
		{
			if (av[2][0] == '/')
				ft_putstr("Stop : division by zero\n");
			else if (av[2][0] == '%')
				ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		ft_putnbr(calculate(ft_atoi(av[1]), ft_atoi(av[3]), av[2][0]));
	}
	else
		ft_putchar('0');
	return (0);
}