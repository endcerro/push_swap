#ifndef HEADER_H
#define HEADER_H 

#include <stdlib.h>

typedef struct 	s_stack
{
 	int top;
 	int *stack;
}				t_stack;

void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *b, t_stack *a);
void ra(t_stack *a);
void ra(t_stack *b);
void rr(t_stack *a, t_stack *b);

//sa : swap a m- swap the first 2 eleents at the top of stack a. Do nothing if there is only one or no elements).
//sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).
//ss : sa and sb at the same time.
//pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
//pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
//ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
//rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
//rr : ra and rb at the same time.

//rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
//rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
//rrr : rra and rrb at the same time.

#endif