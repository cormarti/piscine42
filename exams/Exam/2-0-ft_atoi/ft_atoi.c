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
