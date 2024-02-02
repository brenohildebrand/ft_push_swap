/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node_create.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:37:27 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 10:38:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack_node	stack_node_create(void)
{
	t_stack_node	instance;

	instance = (t_stack_node)new(stack_node);
	instance->value = 0;
	instance->next = NULL;
	instance->previous = NULL;
	return (instance);
}
