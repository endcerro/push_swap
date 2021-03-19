#include "header.h"


void init_stack(int argc, char **argv, t_stack *stack, t_stack *b)
{
	int i;

	i = -1;
	if (!(stack->stack = malloc(sizeof(int) * (2 * (argc - 1)))))
		printf("MALLOC FAILED\n");
	if (!(b->stack = malloc(sizeof(int) * (2 * (argc - 1)))))
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
			return (1);
		c = s->stack[i++];
	}
	// printf("SORTED\n");
	return (0);
}

void solver(t_stack *a, t_stack *b)
{
	char *line;
	int t;

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
	t_stack a;
	t_stack b;
	init_stack(argc, argv, &a, &b);
	// init_stack(argc, argv, &b);
	// printstack(&a);
	

	// printstack(&a);
	solver(&a, &b);
	// printf("done\n");
	free(a.stack);
	free(b.stack);
	return 0;
}