#include "header.h"

int sa(t_stack *stack)
{
	int tmp;

	if (stack->depth <= 1)
		return (printf("SA FAIL\n"));
	printf("SA\n");
	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp; 
	return (0);
}

int sb(t_stack *stack)
{
	int tmp;
	
	if (stack->depth <= 1)
		return (printf("SB FAIL\n"));
	printf("SB\n");
	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp; 
	return (0);
}

int ss(t_stack *a, t_stack *b)
{
	printf("ss\n");
	sa(a);
	sb(b);
	return 0;
}

int pa(t_stack *a, t_stack *b)
{
	if (b->depth == 0)
		return (printf("PA ERROR\n"));
	printf("PA\n");
	push(a, pop(b));
	return (0);
}

int pb(t_stack *a, t_stack *b)
{
	if (a->depth == 0)
		return (printf("PB ERROR\n"));
	printf("PB\n");
	push(b, pop(a));
	return (0);
}

void ra(t_stack *a)
{
	int tmp;

	printf("RA\n");
	tmp = pop(a);
	a->depth++;
	a->stack[a->depth] = tmp;
}

void rb(t_stack *b)
{
	int tmp;

	printf("RB\n");
	tmp = pop(b);
	b->depth++;
	b->stack[b->depth] = tmp;
}

void rr(t_stack *a, t_stack *b)
{
	printf("RR\n");
	ra(a);
	rb(b);
}

void rra(t_stack *a)
{
	printf("RA\n");
	push(a, a->stack[a->depth]);
	a->depth--;
}

void rrb(t_stack *b)
{
	printf("RB\n");
	push(b, b->stack[b->depth]);
	b->depth--;
}

void rrr(t_stack *a, t_stack *b)
{
	printf("RR\n");
	rra(a);
	rrb(b);
}
