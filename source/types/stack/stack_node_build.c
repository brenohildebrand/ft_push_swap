/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node_build.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:40:01 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 10:41:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack_node	stack_node_build(t_i32 value)
{
	t_stack_node	instance;

	instance = stack_node_create();
	stack_node_init(instance, value);
	return (instance);
}
