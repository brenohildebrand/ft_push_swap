/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_start.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:33:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 22:11:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_i32	stack_start(t_stack stack)
{
	stack->cursor = stack->head;
	return (stack->cursor);
}
