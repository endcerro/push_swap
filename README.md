# push_swap

This project is about sorting two stacks using only the instruction set listed below

- sa : swap a - swap the first 2 elements at the top of stack a.
- sb : swap b - swap the first 2 elements at the top of stack b. 
- ss : sa and sb at the same time.
- pa : push a - take the first element at the top of b and put it at the top of a. 
- pb : push b - take the first element at the top of a and put it at the top of b.
- ra : rotate a - shift up all elements of stack a by 1. The first element become the last one.
- rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- rr : ra and rb at the same time.
- rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time.

You're free to program whatever logic you want using C instructions 
You can only interact with the stack using the instructions above
 - You have to code a program that can verify if a stack is sorted after typings the instructions on STDIN
 - You also need a solver that can sort a stack while displaying the called instructions

The defense includes x max instructions for sorting stacks, probably for any stack
