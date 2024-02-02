/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:03:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 10:40:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

#include "framework.h"

typedef struct s_stack	*t_stack;
typedef struct s_stack_node	*t_stack_node;

struct s_stack {
	t_stack_node	head;
	t_stack_node	tail;
	t_u32			height;
};

struct s_stack_node {
	t_i32			value;
	t_stack_node	next;
	t_stack_node	previous;	
}

t_typedata	stack(void);
t_stack		stack_create(void);
void		stack_init(t_stack stack);
t_stack		stack_build(void);
void		stack_destroy(t_stack stack);

void		stack_push(t_stack stack, t_i32 value);
// void		stack_rotate(t_stack stack);
// void		stack_reverse_rotate(t_stack stack);
// int			stack_pop(t_stack stack);
// int			stack_peek(t_stack stack, int index);

// void		stack_rotate_and_print(t_stack stack);
// void		stack_reverse_rotate_and_print(t_stack stack);
// void		stack_push_and_print(t_stack stack, int value);

t_typedata		stack_node(void);
t_stack_node	stack_node_create(void);
void			stack_node_init(t_stack_node node, t_i32 value);
t_stack_node	stack_node_build(t_i32 value);
void			stack_node_destroy(t_stack_node node);

#endif