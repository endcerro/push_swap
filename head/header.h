#ifndef HEADER_H
#define HEADER_H 

#include <stdlib.h>
#include <stdio.h>


typedef struct 	s_stack
{
 	int depth;
 	int *stack;
 	int m_size;
}				t_stack;

int sa(t_stack *a);					//OK
int sb(t_stack *b);					//OK
int ss(t_stack *a, t_stack *b);		//OK
void ra(t_stack *a);				//OK
void rb(t_stack *b);				//OK
void rr(t_stack *a, t_stack *b);	//OK


int pa(t_stack *a, t_stack *b);	//CHECK


// sa : swap a - swap the first 2 elements at the top of stack a. 
// Do nothing if there is only one or no elements).
// sb : swap b - swap the first 2 elements at the top of stack b. 
// Do nothing if there is only one or no elements).
// ss : sa and sb at the same time.

// pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
// pb : push b - take the first element at the top of a and put it at the top of b. Do  nothing if a is empty.
// ra : rotate a - shift up all elements of stack a by 1. The first element become the last one.
// rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
// rr : ra and rb at the same time.
// rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
// rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
// rrr : rra and rrb at the same time.

int pop(t_stack *s);
int push(t_stack *s, int val);
#endif