/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:39:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/03 17:42:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_swap(t_stack stack)
{
	t_stack_node	aux;

	aux = stack->head;
	stack->head = stack->head->next;
	stack->head->previous = NULL;
	aux->previous = stack->head;
	aux->next = stack->head->next;	
	stack->head->next = aux;
}
