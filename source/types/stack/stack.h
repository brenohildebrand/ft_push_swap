/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:03:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 22:10:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

// -- Stack
// -- Represents a stack specific for the ft_push_swap project.
// -- This is the format:
// -- head 
// -- node
// -- node
// -- ...
// -- node
// -- tail

typedef struct s_stack	*t_stack;
typedef struct s_stack_node	*t_stack_node;

struct s_stack {
	t_stack_node	head;
	t_stack_node	tail;
	t_u32			height;
	t_stack_node	cursor;
};

struct s_stack_node {
	t_i32			value;
	t_stack_node	next;
	t_stack_node	previous;	
};

t_typedata		stack(void);
t_stack			stack_create(void);
void			stack_init(t_stack stack);
t_stack			stack_build(void);
void			stack_destroy(t_stack stack);

void			stack_push(t_stack stack, t_i32 value);
void			stack_rotate(t_stack stack);
void			stack_reverse_rotate(t_stack stack);
t_i32			stack_pop(t_stack stack);
void			stack_swap(t_stack stack);
t_i32			stack_peek(t_stack stack, t_u32 index);
t_i32			stack_is_sorted(t_stack stack);
t_u32			stack_get_height(t_stack stack);

t_stack_node	stack_start(t_stack stack);
t_stack_node	stack_next(t_stack stack);
t_stack_node	stack_previous(t_stack stack);
t_stack_node	stack_end(t_stack stack);

t_typedata		stack_node(void);
t_stack_node	stack_node_create(void);
void			stack_node_init(t_stack_node node, t_i32 value);
t_stack_node	stack_node_build(t_i32 value);
void			stack_node_destroy(t_stack_node node);

#endif