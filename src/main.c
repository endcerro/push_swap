#include "header.h"


void init_stack(int argc, char **argv, t_stack *stack)
{
	int i;

	i = -1;
	if (!(stack->stack = malloc(sizeof(int) * (2 * (argc - 1)))))
		printf("MALLOC FAILED\n");
	
	stack->m_size = 2 * (argc - 1);
	
	while (++i < argc - 1)
		stack->stack[i] = atoi(argv[i + 1]);
	stack->depth = argc - 2;
}

void printstack(t_stack *s)
{
	int i;

	i = 0;
	printf("%d>>>>>>>>>>>\n", s->depth);
	while(i <= s->depth)
	{
		printf("%d\n", s->stack[i]);
		i++;
	}
	printf("<<<<<<<<<<<\n");
}

int checksort(t_stack *s)
{
	int i;
	int c;

	i = 0;
	c = s->stack[0];
	while (i <= s->depth)
	{
		if (c > s->stack[i])
			return (printf("NOT SORTED\n"));
		c = s->stack[i++];
	}
	printf("SORTED\n");
	return (0);
}

int main(int argc, char **argv)
{
	t_stack a;
	t_stack b;
	init_stack(argc, argv, &a);
	init_stack(argc, argv, &b);
	printstack(&a);
	

	printstack(&a);
	checksort(&a);
	free(a.stack);
	return 0;
}