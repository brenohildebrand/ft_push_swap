/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 06:09:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 06:14:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_typedata	stack(void)
{
	static struct s_typedata	stack_typedata = {
		.create = (t_any (*)(void))stack_create,
		.destroy = (void (*)(t_any))stack_destroy,
		.size = sizeof(struct s_stack)
	};

	return (&stack_typedata);
}
