/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_node.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:35:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 10:37:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_typedata	stack_node(void)
{
	static struct s_typedata	stack_node_typedata = {
		.create = (t_any (*)(void))stack_node_create,
		.destroy = (void (*)(t_any))stack_node_destroy,
		.size = sizeof(struct s_stack_node);	
	};
	
	return (&stack_node_typedata);
}
