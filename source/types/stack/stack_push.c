/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 07:53:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 17:19:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_push(t_stack stack, t_i32 value)
{
	t_stack_node	node;

	node = stack_node_build(value);
	if (stack->head == NULL)
	{
		stack->head = node;
		stack->tail = node;
	}
	else
	{
		node->previous = stack->tail;
		stack->tail->next = node;
		stack->tail = node;
	}
	stack->height++;
}