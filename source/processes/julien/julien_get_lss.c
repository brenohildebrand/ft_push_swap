/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_get_lss.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:51:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/05 22:18:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

t_vector	julien_get_lss(t_stack a)
{
	t_vector	lss;
	t_u32		*map;
	t_u32		*longest;

	lss = vector_build();
	map = allocate(stack_get_height(a) * 2 * sizeof(t_u32));
	longest = allocate(stack_get_height(a) * 2 * sizeof(t_u32));

	
	// -------------------------------------------------------------------------
	t_u32		i;
	t_u32		j;
	t_u32		max;
	t_vector	lss;

	lss = vector_build();
	init(lss, a, b);
	build(lss, a, b);
	// get path
	// go rotating a and if found the next in the path push it to b.
	i = 0;
	while (i < 2 * stack_get_height(a))
	{
		vector_push(lss, vector_build());
		i++;
	}
	i = 0;
	vector_push(vector_get(lss, 0), integer_build(0));
	while (i < 2 * stack_get_height(a))
	{
		j = 0;
		max = 0;
		while (j < i)
		{
			if (vector_get_length(vector_get(lss, i)) > max && stack_peek(a, i) > stack_peek(a, j))
			{
				
			}
			j++
		}
		vector_push(vector_get(lss, 0), integer_build(i));
	}
	vector_destroy(lss);
}

// julien_get_lss
// index = julien_get_lss_index();
// from that index start creating the best possibility. NO! I can create while getting the index.
// 