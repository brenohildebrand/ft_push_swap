/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_get_lss.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:51:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/09 07:12:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

static void	push_in_reverse_order(
	t_vector lss,
	t_vector map,
	unsigned int best_index
){
	unsigned int	i;

	i = best_index;
	while (map[i] != i)
	{
		vector_push(lss, integer_create((int)i));
		i = map[i];
	}
}

static void	fill_best_and_map(t_stack a, t_vector lss, t_vector best, t_vector map)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	best_j;

	i = 0;
	while (i < stack_get_height(a) * 2)
	{
		j = 0;
		while (j < i)
		{
			if (stack_peek(a, i) > stack_peek(a, j) && 
				integer_compare(vector_get(best, j), vector_get(best, best_j)) >= 0)
				best_j = j;
			j++;
		}
		best[i] = best[best_j] + 1;
		map[i] = best_j;
		i++;
	}
}

static unsigned int	compute_best_index(t_vector best)
{
	while (i < stack_get_height(a) * 2)
	{
		condition = integer_compare(vector_get(best, i), vector_get(best, best_index)); 
		if (condition == 1)
			best_index = i;
		i++;
	}
}

static void	fill_lss(t_stack a, t_vector lss, t_vector best, t_vector map)
{
	unsigned int	best_index;

	fill_best_and_map(a, lss, best, map);
	best_index = compute_best_index(best);
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
