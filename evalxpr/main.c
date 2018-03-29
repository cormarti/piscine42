#include <stdlib.h>
#include "libft.h"

int main(int ac, char **av)
{
    int res;
    char *tmp;

    if (ac != 2)
        return (0);
    tmp = malloc(sizeof(tmp) * (ft_strlen(av[1]) + 1)); // PROTECT
    tmp = infix_to_postfix(av[1]);
//   reparse(tmp);
    ft_putstr(tmp);
    ft_putchar('\n');
    res = postfix_to_int(tmp);
    ft_putnbr(res);
    return (res);
}

char    *parser(char *s1, char *s2)
{
    int i;
    int j;
    int k;
    char tmp[50][50];

    i = -1;
    j = -1;
    k = 0;

    while (s1[++i] != 0)
    {
        if(is_num(s1[i])
            tmp[k][j++] = s1[i];
        else
            if (j = -1)
                k++;
    }

}