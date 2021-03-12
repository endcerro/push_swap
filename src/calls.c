#include "header.h"

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
	int tmp[a->top + 2];

	int top = a->top;
	printf("RA\n");
	i = 0;
	tmp[0] = a->stack[top];
	while(i < a->top)
	{
		tmp[i + 1] = a->stack[i];
		i++;
	}
	i = 0;
	while(i < top)
	{
		a->stack[i] = tmp[i];
		i++;
	}
	a->stack[i] = tmp[i];
}

void rb(t_stack *a)
{
	int i;
	int tmp[a->top + 2];
	int top = a->top;

	printf("RB\n");
	i = 0;
	tmp[0] = a->stack[top];
	while(i < a->top)
	{
		tmp[i + 1] = a->stack[i];
		i++;
	}
	i = 0;
	while(i < top)
	{
		a->stack[i] = tmp[i];
		i++;
	}
	a->stack[i] = tmp[i];
}

void rr(t_stack *a, t_stack *b)
{
	printf("RR\n");
	ra(a);
	rb(b);
}