/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:07:37 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/20 18:16:20 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int sa(t_stack *stack, int o)
{
	int tmp;

	if (stack->depth <= 1)
		return (printf("SA FAIL\n"));
	if (o)
		printf("SA\n");
	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp; 
	return (0);
}

int sb(t_stack *stack, int o)
{
	int tmp;
	
	if (stack->depth <= 1)
		return (printf("SB FAIL\n"));
	if (o)
		printf("SB\n");
	tmp = stack->stack[0];
	stack->stack[0] = stack->stack[1];
	stack->stack[1] = tmp; 
	return (0);
}

int ss(t_stack *a, t_stack *b, int o)
{
	printf("ss\n");
	sa(a, o);
	sb(b, o);
	return 0;
}

int pa(t_stack *a, t_stack *b, int o)
{
	if (b->depth == 0)
		return (printf("PA ERROR\n"));
	if (o)
		printf("PA\n");
	push(a, pop(b));
	return (0);
}

int pb(t_stack *a, t_stack *b, int o)
{
	if (a->depth == 0)
		return (printf("PB ERROR\n"));
	if (o)
		printf("PB\n");
	push(b, pop(a));
	return (0);
}

void ra(t_stack *a, int o)
{
	int tmp;

	if (o)
		printf("RA\n");
	tmp = pop(a);
	a->depth++;
	a->stack[a->depth] = tmp;
}

void rb(t_stack *b, int o)
{
	int tmp;

	if (o)
		printf("RB\n");
	tmp = pop(b);
	b->depth++;
	b->stack[b->depth] = tmp;
}

void rr(t_stack *a, t_stack *b, int o)
{
	if (o)
		printf("RR\n");
	ra(a, o);
	rb(b, o);
}

void rra(t_stack *a, int o)
{
	if (o)
		printf("RA\n");
	push(a, a->stack[a->depth]);
	a->depth--;
}

void rrb(t_stack *b, int o)
{
	if (o)
		printf("RB\n");
	push(b, b->stack[b->depth]);
	b->depth--;
}

void rrr(t_stack *a, t_stack *b, int o)
{
	if (o)
		printf("RR\n");
	rra(a, o);
	rrb(b, o);
}
