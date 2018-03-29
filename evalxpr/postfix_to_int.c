#include <stdlib.h>
#include "libft.h"

int *stack;
int stack_top2 = -1;

void    var_init(int *x, int *y, int *z)
{
    *x = 0;
    *y = 0;
    *z = 0;
}

void    push_to_stack2(int x)
{
	stack[++stack_top2] = x;
}

int     next_stack2()
{
    if(stack_top2 == -1)
        return -1;
    return stack[stack_top2--];
}

int     postfix_to_int(char *str)
{
    int i;
	int x;
    int y;
    int z;

    i = -1;
    var_init(&x, &y, &z);
    stack = malloc(sizeof(*stack) * ft_strlen(str));
	while(str[++i] != '\0')
	{
		x = next_stack2();
		y = next_stack2();
		if (str[i] == '+')
		    z = x + y;
        else if (str[i] == '-')
			z = y - x;
        else if (str[i] == '*')
			z = x * y;
        else if (str[i] == '/')
			z = y / x;
        else if (str[i] == '%')
			z = y % x;
		push_to_stack2(z);
	}
	return (stack[stack_top2]);
}