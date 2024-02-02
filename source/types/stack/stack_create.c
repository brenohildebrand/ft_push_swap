/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:12:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 06:18:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	stack_create(void)
{
	t_stack	instance;
	
	instance = (t_stack)new(stack);
	instance->content = NULL;
	instance->height = 0;
	instance->max_height = 0;
	return (instance;)
}
