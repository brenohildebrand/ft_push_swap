/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_get_lss.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:51:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 16:16:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

static void	push_in_reverse_order(
	t_vector lss,
	t_vector map,
	int best_index
){
	int	i;

	i = best_index;
	while (integer_get(vector_get(map, i)) != i)
	{
		vector_push(lss, integer_create(i));
		i = integer_get(vector_get(map, i));
	}
}

static void	fill_best_and_map(t_stack a, t_vector best, t_vector map)
{
	int	i;
	int	j;
	int	best_j;

	vector_push(best, integer_create(1));
	i = 1;
	while (i < stack_get_height(a) * 2)
	{
		j = 0;
		best_j = i;
		while (j < i)
		{
			if (integer_get(stack_peek(a, i)) > \
				integer_get(stack_peek(a, j)) && \
				integer_get(vector_get(best, j)) >= \
				integer_get(vector_get(best, best_j)))
				best_j = j;
			j++;
		}
		vector_push(best, integer_create(\
			integer_get(vector_get(best, best_j)) + 1));
		vector_push(map, integer_create(best_j));
		i++;
	}
}

static int	compute_best_index(t_stack a, t_vector best)
{
	int	i;
	int	best_index;

	i = stack_get_height(a);
	best_index = i;
	while (i < stack_get_height(a) * 2)
	{
		if (integer_get(vector_get(best, i)) > \
			integer_get(vector_get(best, best_index)))
			best_index = i;
		i++;
	}
	return (best_index);
}

static void	fill_lss(t_stack a, t_vector lss, t_vector best, t_vector map)
{
	int	best_index;

	fill_best_and_map(a, best, map);
	best_index = compute_best_index(a, best);
	push_in_reverse_order(lss, map, best_index);
	vector_reverse(lss);
}

t_vector	julien_get_lss(t_stack a)
{
	t_vector	lss;
	t_vector	best;
	t_vector	map;

	lss = vector_create();
	best = vector_create();
	map = vector_create();
	fill_lss(a, lss, best, map);
	vector_destroy(best);
	vector_destroy(map);
	return (lss);
}
