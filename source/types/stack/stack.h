/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:03:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 20:18:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_stack	*t_stack;

struct s_stack {
	
};

t_typedata	stack(void);
t_stack		stack_create(void);
void		stack_init(t_stack stack);
t_stack		stack_build(void);
void		stack_destroy(t_stack stack);

void		stack_rotate(t_stack stack);
void		stack_reverse_rotate(t_stack stack);
void		stack_push(t_stack stack, int value);
int			stack_pop(t_stack stack);
int			stack_peek(t_stack stack, int index);

void		stack_rotate_and_print(t_stack stack);
void		stack_reverse_rotate_and_print(t_stack stack);
void		stack_push_and_print(t_stack stack, int value);

#endif