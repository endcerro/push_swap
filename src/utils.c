#include "header.h"

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

	// for (int j = 0; j <= s->depth + 1; j++)
	// {
	// 	printf("W %d\n", tab[j]);
	// }
	// printf("depth is %d\n", s->depth); 
		
	i = 0;
	while (i <= s->depth + 1)
	{
		s->stack[i] = tab[i];
		i++;
	}
	// for (int j = 0; j <= s->depth + 1; j++)
	// {
	// 	printf("A %d\n", s->stack[j]);
	// }
	
	s->depth++;
	printstack(s);
	return (0);	
}
