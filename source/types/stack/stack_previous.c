/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_previous.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:38:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 22:11:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_i32	stack_previous(t_stack stack)
{
	if (stack->cursor->previous == NULL)
		return (0);
	stack->cursor = stack->cursor->previous;
	return (stack->cursor);
}
