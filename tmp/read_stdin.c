#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*cat(char *buf, char c, int size)
{
	int	i;
    char *tmp;

    tmp = malloc((size + 2) * sizeof(char));
	i = -1;
	while (buf[++i] != '\0')
        tmp[i] = buf[i];
    tmp[i++] = c;
	tmp[i++] = '\0';
    free(buf);
	return (tmp);
}

int     main()
{
    char *buf;
    char c;
    int handle;
    int size;

    size = 1;
    buf = malloc(size * sizeof(char));
    buf[0] = '\0';
    while(((handle = read(0, &c, 1))) > 0){
        buf = cat(buf, c, size);
        size++;}
    printf("%s\n",buf);
    return (0);
}