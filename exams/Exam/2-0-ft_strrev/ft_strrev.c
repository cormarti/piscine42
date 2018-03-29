char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		str_len;

	str_len = 0;
	i = 0;
	while (str[str_len] != '\0')
		str_len++;
	while (i < (str_len / 2))
	{
		tmp = str[i];
		str[i] = str[str_len - i - 1];
		str[str_len - i - 1] = tmp;
		i++;
	}
	return (str);
}
