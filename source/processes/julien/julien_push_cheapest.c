/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_push_cheapest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:47:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/05 15:23:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Push cheapest.
// -- Pushes the cheapest from stack b to stack a.

static t_i32	get_price(
	t_stack a,
	t_stack b,
	t_stack_node origin,
	t_stack_node target
){
	t_u32	r_r;
	t_u32	r_rr;
	t_u32	rr_r;
	t_u32	rr_rr;

	r_r = (min(da, db) + abs(da - db) + 1);
	r_rr = da + rdb + 1;
	rr_r = rda + db + 1;
	rr_rr = min(rda, rdb) + abs(rda - rdb) + 1;

	return (min(r_r, r_rr, rr_r, rr_rr));
}

static t_stack_node	find_target(t_stack a, t_stack b, t_stack_node origin)
{
	t_stack_node	current;
	t_stack_node	target;
	t_stack_node	minimum;

	current = stack_start(a);
	target = NULL;
	minimum = current;
	while (current)
	{
		if (current->value < origin->value)
		{
			if (target == NULL)
				target = current;
			else if (current->value > target->value)
				target = current;
		}
		if (current->value < minimum->value)
			minimum = current;
		current = stack_next(a);
	}
	if (target == NULL)
		target = minimum;
	return (target);
}

static t_stack_node	find_origin(t_stack a, t_stack b)
{
	t_stack_node	current;
	t_stack_node	origin;
	t_stack_node	target;
	t_u32			price;
	t_u32			best_price;

	current = stack_start(b);
	origin = current;
	best_price = 4294967295;
	while (current)
	{
		target = find_target(a, b, origin);
		price = get_price(a, b, origin, target);
		if (price <= best_price)
		{
			origin = current;
			best_price = price;
		}
		current = stack_next(b);
	}
	return (origin);
}

void	julien_push_cheapest(t_stack a, t_stack b)
{
	t_stack_node	origin;
	t_stack_node	target;

	origin = find_origin(a, b);
	target = find_target(a, b, origin);
	julien_push_from_b_to_a(a, b, origin, target);
}
