#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*str;

	i = -1;
	src_len = 0;
	while (src[src_len])
		src_len++;
	str = (char*)malloc(sizeof(*str) * (src_len + 1));
	while (++i < src_len)
		str[i] = src[i];
	str[i] = 0;
	return (str);
}