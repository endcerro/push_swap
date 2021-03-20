/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:16:09 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/20 18:21:00 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void init_stack(int argc, char **argv, t_stack *stack, t_stack *b)
{
	int		i;

	i = -1;
	if (!(stack->stack = malloc(sizeof(int) * (2 * (argc - 1)))))
		printf("MALLOC FAILED\n");
	if (!(b->stack = malloc(sizeof(int) * (2 * (argc - 1)))))
		printf("MALLOC FAILED\n");	
	stack->m_size = 2 * (argc - 1);
	b->m_size = stack->m_size;
	while (++i < argc - 1)
		stack->stack[i] = atoi(argv[i + 1]);
	stack->depth = argc - 2;
}

void printstack(t_stack *s)
{
	int		i;

	i = 0;
	printf("%d>>>>>>>>>>>\n", s->depth);
	while(i <= s->depth)
		printf("%d\n", s->stack[i++]);
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
			return (1);
		c = s->stack[i++];
	}
	return (0);
}

void checker(t_stack *a, t_stack *b)
{
	char	*line;
	int		t;

	while (get_next_line(1, &line))
	{
		t = comp(line, a, b, 0);
		free(line);
		if (t)
		{
			printf("Error\n");
			return ;
		}
	}
	if (!checksort(a) && b->depth == 0)
		printf("OK\n");
	else
		printf("KO\n");
}

int main(int argc, char **argv)
{
	t_stack 	a;
	t_stack 	b;
	init_stack(argc, argv, &a, &b);
	checker(&a, &b);
	free(a.stack);
	free(b.stack);
	return 0;
}