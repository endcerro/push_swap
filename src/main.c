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
	printf("DEPTH IS %d\n",stack->depth );
}

void printstack(t_stack *s)
{
	int i;

	i = 0;
	printf("-----------%d-----------------\n", s->depth);
	while(i <= s->depth)
	{
		printf("%d\n", s->stack[i]);
		i++;
	}
	printf("-------------\n");
}

int main(int argc, char **argv)
{
	t_stack a;
	init_stack(argc, argv, &a);
	printstack(&a);
	
	push(&a, 10);
	printstack(&a);
	// printf("top is %d\n",a.stack[0]);
	// sa(&a);
	// printstack(&a);
	// printf("top is %d\n",a.stack[0]);
	// pop(&a);
	// printstack(&a);
	// push(&a, pop(&a));
	// printstack(&a);
	// ra(&a);
	// ra(&a);
	// printstack(&a);
	// rra(&a);
	// printstack(&a);
	// sa(&a);
	// printstack(&a);
	// printf("top is %d\n",a.stack[0]);
	// printf("bottom is %d\n",a.stack[a.bottom]);
	// ra(&a);
	// printstack(&a);
	// printf("bottom is %d\n",a.stack[a.bottom]);
	// rra(&a);
	// printstack(&a);

	free(a.stack);
	return 0;
}