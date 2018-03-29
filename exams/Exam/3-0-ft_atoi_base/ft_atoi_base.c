static int	index_base(char c, const char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int			ft_atoi_base(char *str, char *base)
{
	int     i;
	int		res;
	int		sign;
	int		nbase;

    i = 0;
	sign = 1;
    nbase = 0;
    while (base[nbase])
        nbase++;
	if (nbase < 2)
		return (0);
	while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
		str++;
	sign = ((str[i] == '-') ? -1 : 1);
	if ((str[i] == '-') || str[i] == '+')
		i++;
	while (index_base(str[i], base) < nbase)
		res = res * nbase - index_base(str[i++], base);
	return (sign * res);
}