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


int main(int argc, char **argv)
{
	t_stack a;
	init_stack(argc, argv, &a);
	free(a.stack);


	return 0;
}