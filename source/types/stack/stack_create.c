/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:12:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 10:12:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	stack_create(void)
{
	t_stack	instance;
	
	instance = (t_stack)new(stack);
	instance->head = NULL;
	instance->tail = NULL;
	instance->height = 0;
	return (instance);
}

