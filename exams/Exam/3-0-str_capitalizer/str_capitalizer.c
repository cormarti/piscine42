int		is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]) && (str[i] >= 'a' && str[i] <= 'z'))
			if ((i == 0) || !is_alphanumeric(str[i - 1]))
				str[i] -= 32;
		if (is_alphanumeric(str[i]) && (str[i] >= 'A' && str[i] <= 'Z'))
			if (is_alphanumeric(str[i - 1]))
				str[i] += 32;
		i++;
	}
	return (str);
}