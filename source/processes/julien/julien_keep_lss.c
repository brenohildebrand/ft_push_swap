/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_keep_lss.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:59:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 07:18:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Keep lss.
// -- Pushes all but the longest sorted subsequence to stack_b.

void	julien_keep_lss(t_stack a, t_stack b)
{
	t_vector	lss;
	t_u32		i;

	lss = julien_get_lss(a);
	i = 0;
	while (i < vector_get_length(lss))
	{
		if (stack_peek(a, 0) == integer_get_value(vector_get(lss, i)))
		{
			stack_push(b, stack_pop(a));
			print("pb");
			i++;
		}
		else
		{
			stack_rotate(a);
		}
	}
	vector_destroy(lss);
}
