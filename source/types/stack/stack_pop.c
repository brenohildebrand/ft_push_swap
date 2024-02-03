/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:33:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 17:37:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_i32	stack_pop(t_stack stack)
{
	t_stack_node	old_head;
	t_i32			old_head_value;

	old_head = stack->head;
	old_head_value = old_head->value;
	stack->head = stack->head->next;
	stack->head->previous = NULL;
	stack_node_destroy(old_head);
	return (old_head_value);
}
