/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:37:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 17:32:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

// -- Rotate
// -- The top becomes the bottom.

void	stack_rotate(t_stack stack)
{
	t_stack_node	aux;

	if (stack->height == 1)
	{
		return ;
	}
	else if (stack->height == 2)
	{
		aux = stack->head;
		stack->head = stack->tail;
		stack->head->next = aux;
		stack->head->previous = NULL;
		stack->tail = aux;
		stack->tail->next = NULL;
		stack->tail->previous = stack->head;
	}
	else
	{
		aux = stack->tail;
		stack->tail = stack->head;
		stack->tail->next = NULL;
		stack->tail->previous = aux;
		stack->head = stack->head->next;
		stack->head->previous = NULL;
	}
}
