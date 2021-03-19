#include "header.h"

int x_strcmp(char *a, char *b)
{
	int i = 0;

	while(a[i] && b[i])
	{
		if (a[i] != b[i])
			return 0;
		i++;
	}
	if (a[i] == 0 && b[i] == 0)
		return (1);
	return (0);
}

int comp(char *str, t_stack *a, t_stack *b, int o)
{

	if (x_strcmp(str, "sa"))
		sa(a, o);
	else if (x_strcmp(str, "sb"))
		sb(b, o);
	else if (x_strcmp(str, "ss"))
		ss(a, b, o);
	else if (x_strcmp(str, "pa"))
		pa(a, b, o);
	else if (x_strcmp(str, "pb"))
		pb(a, b, o);
	else if (x_strcmp(str, "ra"))
		ra(a, o);
	else if (x_strcmp(str, "rb"))
		rb(b, o);
	else if (x_strcmp(str, "rr"))
		rr(a, b, o);
	else if (x_strcmp(str, "rra"))
		rra(a, o);
	else if (x_strcmp(str, "rrb"))
		rrb(b, o);
	else if (x_strcmp(str, "rrr"))
		rrr(a, b, o);
	else
		return (1);
	return (0);
}

int pop(t_stack *s)
{
	int i;
	int tmp;
	
	tmp = s->stack[0];
	i = 0;
	while (i < s->depth)
	{
		s->stack[i] = s->stack[i + 1];
		i++;
	}
	s->depth--;
	return (tmp);
}

int push(t_stack *s, int val)
{
	int i;
	int tab[s->m_size];

	i = 0;
	while (i <= s->depth)
	{
		tab[i + 1] = s->stack[i];
		i++;
	}
	tab[0] = val;
	i = 0;
	while (i <= s->depth + 1)
	{
		s->stack[i] = tab[i];
		i++;
	}
	s->depth++;
	return (0);	
}
