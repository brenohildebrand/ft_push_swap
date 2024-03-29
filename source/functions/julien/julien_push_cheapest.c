/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_push_cheapest.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:47:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 16:48:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Push cheapest.
// -- Pushes the cheapest from stack b to stack a.

static int	find_target(t_stack a, t_stack b, int origin)
{
	int	current;
	int	target;
	int	minimum;
	int	current_value;

	current = stack_get_height(a) - 1;
	target = -1;
	minimum = current;
	while (current >= 0)
	{
		current_value = integer_get(stack_peek(a, current));
		if (current_value > integer_get(stack_peek(b, origin)))
		{
			if (target == -1)
				target = current;
			else if (current_value < integer_get(stack_peek(a, target)))
				target = current;
		}
		if (current_value < integer_get(stack_peek(a, minimum)))
			minimum = current;
		current--;
	}
	if (target == -1)
		target = minimum;
	return (target);
}

static int	find_origin(t_stack a, t_stack b)
{
	int	current;
	int	origin;
	int	target;
	int	price;
	int	best_price;

	current = stack_get_height(b) - 1;
	origin = current;
	best_price = 2147483647;
	while (current >= 0)
	{
		target = find_target(a, b, origin);
		price = julien_get_price(a, b, origin, target);
		if (price <= best_price)
		{
			origin = current;
			best_price = price;
		}
		current--;
	}
	return (origin);
}

void	julien_push_cheapest(t_stack a, t_stack b)
{
	int	origin;
	int	target;

	origin = find_origin(a, b);
	target = find_target(a, b, origin);
	julien_push(a, b, origin, target);
}
