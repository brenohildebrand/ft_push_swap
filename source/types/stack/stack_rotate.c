/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:37:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 18:32:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

// -- Rotate
// -- The top becomes the bottom.

void	stack_rotate(t_stack stack)
{
	if (stack->height == 1)
		return ;
	stack->head->previous = stack->tail;
	stack->tail->next = stack->head;
	stack->head = stack->head->next;
	stack->tail = stack->head->previous;
	stack->head->previous = NULL;
	stack->tail->next = NULL;
}
