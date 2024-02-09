/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:03:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 16:30:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

// -- Stack
// -- Represents a stack specific for the ft_push_swap project.
// -- It supports the following operations: "push, pop, swap, rotate and
// -- reverse rotate".

typedef struct s_stack	*t_stack;
typedef struct s_stack_node	*t_stack_node;

struct s_stack {
	t_vector		content;
};

t_stack			stack_create(void);
void			stack_destroy(t_stack stack);

void			stack_push(t_stack stack, t_any any);
t_any			stack_pop(t_stack stack);
void			stack_rotate(t_stack stack);
void			stack_reverse_rotate(t_stack stack);
void			stack_swap(t_stack stack);
t_any			stack_peek(t_stack stack, unsigned int index);
int				stack_is_sorted(t_stack stack);
unsigned int	stack_get_height(t_stack stack);

#endif