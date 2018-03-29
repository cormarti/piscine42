#include <stdlib.h>
#include "libft.h"

void push(char c);
int nxt_op();
int priority(char c);
int is_empty();

int stack_top;
int stack[100];
char post_fix[400];

char    *infix_to_postfix(char *av)
{
	int i;
	int shift;
	char nxt;
	char c;

	shift = 0;
    i = -1;
//    post_fix = (char*)malloc(sizeof(av) * (ft_strlen(av) * 2)); // PROTECT
	while (i++ < ft_strlen(av))
	{
		c = av[i];
		if(!is_space(c))
		{
            if (is_par(c))
            {
                if (c == '(')
                    push (c);
                else
                    while((nxt = nxt_op()) != '(')
                        post_fix[shift++] = nxt;
            }
            else if (is_op(c))
            {
                while(!is_empty() && priority(stack[stack_top]) >= priority(c))
                    post_fix[shift++] = nxt_op();
                push(c);
            }
			else
                post_fix[shift++] = c;
		}
	}
	while(!is_empty()) 
		post_fix[shift++] = nxt_op();
	post_fix[shift] = '\0';
    return (post_fix);
}

int     priority(char x)
{
	if(x == '(')
		return 0;
	if(x == '+' || x == '-')
		return 1;
	if(x == '*' || x == '/' || x == '%')
		return 2;
	return (0);
}

void    push(char c)
{
	if(stack_top > 50)
	{
		ft_putstr("Stack Overflow\n");
		exit(1);
	}
	stack[++stack_top] = c;
}

int     nxt_op()
{
	if(is_empty())
	{
		ft_putstr("Empty Stack\n");
		exit(1);
	}
	return(stack[stack_top--]);
}

int     is_empty()
{
	if(stack_top == -1)
		return 1;
	return 0;
}