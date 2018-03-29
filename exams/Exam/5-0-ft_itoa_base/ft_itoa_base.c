#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa_base(int value, int base)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (value >= base)
		str = ft_strcat(ft_itoa_base(value / base, base), ft_itoa_base(value % base, base));
	else if (value < base)
	{
		if (base > 10)
			str[0] = (base - 10) + 'A';
		else
			str[0] = base + '0';
		str[1] = '\0';
	}
	return (str);
}
