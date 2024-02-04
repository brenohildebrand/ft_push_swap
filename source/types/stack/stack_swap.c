/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:39:15 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 18:22:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_swap(t_stack stack)
{
	t_i32	aux;

	if (stack->height <= 1)
		return ;
	aux = stack->head->value;
	stack->head->value = stack->head->next->value;
	stack->head->next->value = aux;
}
