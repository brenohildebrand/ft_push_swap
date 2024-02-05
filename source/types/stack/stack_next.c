/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_next.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:36:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 22:11:17 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_i32	stack_next(t_stack stack)
{
	if (stack->cursor->next == NULL)
		return (0);
	stack->cursor = stack->cursor->next;
	return (stack->cursor);
}
