/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edal--ce <edal--ce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 18:10:52 by edal--ce          #+#    #+#             */
/*   Updated: 2021/03/20 18:16:28 by edal--ce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int sa(t_stack *a, int o);					//OK SWAP F2
int sb(t_stack *b, int o);					//OK SWAP F2
int ss(t_stack *a, t_stack *b, int o);		//OK SWAP X2 F2 
int pa(t_stack *a, t_stack *b, int o);		//OK MV FB O A
int pb(t_stack *a, t_stack *b, int o);		//OK MV FA O B
void ra(t_stack *a, int o);				//OK UP ROTATE
void rb(t_stack *b, int o);				//OK UP ROTATE
void rr(t_stack *a, t_stack *b, int o);	//OK UP ROTATE X2
void rra(t_stack *a, int o);				//OK R ROTATE
void rrb(t_stack *b, int o);				//OK R ROTATE
void rrr(t_stack *a, t_stack *b, int o);




int	get_next_line(int fd, char **out);
int pop(t_stack *s);
int push(t_stack *s, int val);
int comp(char *str, t_stack *a, t_stack *b, int o);	
#endif