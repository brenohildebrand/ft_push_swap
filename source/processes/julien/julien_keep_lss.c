/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_keep_lss.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:59:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/05 18:30:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Keep lss.
// -- Pushes all but the longest sorted subsequence to stack_b.

// O (n^2)
// -- The idea to solve this it to initialize an array lss 2 * stack_get_height
// -- solve for lss[0]
// -- then for lss[i]
// -- look for the maximum valid before i
// -- and add 1 to it.

void	julien_keep_lss(t_stack a, t_stack b)
{
	t_u32		i;
	t_u32		j;
	t_u32		max;
	t_vector	lss;

	lss = vector_build();
	init(lss, a, b);
	build(lss, a, b);
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

// lss
// get_lss_index(); O(n^2)
// find path
// path could be a vector with the nodes in order
// rotate a pushing everyone but path