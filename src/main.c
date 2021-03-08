#include "header.h"


void init_stack(int argc, char **argv, t_stack *stack)
{
	int i;

	i = -1;
	if (!(stack->stack = malloc(sizeof(int) * argc - 1)))
		printf("MALLOC FAILED\n");

	while (++i < argc - 1)
	{
		
	}
}

void sa(t_stack *stack)
{
	printf("sb\n");
	int tmp;

	tmp = stack->stack[stack->top];
	stack->stack[stack->top] = stack->stack[stack->top - 1];
	stack->stack[stack->top - 1] = tmp; 
}

void sb(t_stack *stack)
{
	printf("sb\n");
	int tmp;

	tmp = stack->stack[stack->top];
	stack->stack[stack->top] = stack->stack[stack->top - 1];
	stack->stack[stack->top - 1] = tmp; 
}

void ss(t_stack *a, t_stack *b)
{
	printf("ss\n");
	sa(a);
	sb(b);
}

void pa(t_stack *a, t_stack *b)
{
	printf("pa\n");
	if (b->top)
		a->stack[++a->top] = b->stack[b->top--]; 
	else
		printf("pa\n");
}

void pb(t_stack *a, t_stack *b)
{
	printf("pb\n");
	if (a->top)
		b->stack[++b->top] = a->stack[a->top--]; 
	else
		printf("pb\n");
}

void ra(t_stack *a)
{
	int i;
	int t;


	i = 0;
	// while(i < a->top)
	// {
	// 	t = a->stack[i + 1];
		
		
	// }
}

int main(int argc, char **argv)
{
	t_stack a;
	init_stack(argc, argv, &a);
	free(a.stack);


	return 0;
}