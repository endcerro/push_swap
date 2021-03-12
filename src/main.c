#include "header.h"


void init_stack(int argc, char **argv, t_stack *stack)
{
	int i;

	i = -1;
	if (!(stack->stack = malloc(sizeof(int) * argc - 1)))
		printf("MALLOC FAILED\n");

	while (++i < argc - 1)
		stack->stack[i] = atoi(argv[i + 1]);
	stack->top = argc - 2;
}

void printstack(t_stack *s)
{
	int i;

	i = 0;
	while(i <= s->top)
	{
		printf("%d ", s->stack[i]);
		i++;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	t_stack a;
	init_stack(argc, argv, &a);
	printstack(&a);
	ra(&a);
	printstack(&a);
	printf("top is %d\n",a.stack[a.top]);
	free(a.stack);
	return 0;
}