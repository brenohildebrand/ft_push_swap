/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:39:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 21:38:09 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Push
// -- Push origin from stack b to the top of target in stack a

static void	rr_rr(t_stack a, t_stack b, int origin, int target)
{
	int		min;
	int		abs;

	if (origin < target)
		min = origin;
	else
		min = target;
	while (min--)
		rrr(a, b);
	if (origin < target)
	{
		abs = target - origin;
		while (abs--)
			rra(a, b);
	}
	else
	{
		abs = origin - target;
		while (abs--)
			rrb(a, b);
	}
}

static void	rr_r(t_stack a, t_stack b, int origin, int target)
{
	int	counter;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	while (target--)
		rra(a, b);
	counter = stack_get_height(b) - origin;
	while (counter--)
		rb(a, b);
}

static void	r_rr(t_stack a, t_stack b, int origin, int target)
{
	int	counter;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	while (origin--)
		rrb(a, b);
	counter = stack_get_height(a) - target;
	while (counter--)
		ra(a, b);
}

static void	r_r(t_stack a, t_stack b, int origin, int target)
{

	int		min;
	int		abs;

	origin = stack_get_height(b) - origin;
	target = stack_get_height(a) - target;
	if (origin < target)
		min = origin;
	else
		min = target;
	while (min--)
		rr(a, b);
	if (origin < target)
	{
		abs = target - origin;
		while (abs--)
			ra(a, b);
	}
	else
	{
		abs = origin - target;
		while (abs--)
			rb(a, b);
	}
}

void		julien_push(t_stack a, t_stack b, int origin, int target)
{
	int	option;

	option = julien_get_option(a, b, origin, target);
	if (option == 0)
		r_r(a, b, origin, target);
	else if (option == 1)
		r_rr(a, b, origin, target);
	else if (option == 2)
		rr_r(a, b, origin, target);
	else if (option == 3)
		rr_rr(a, b, origin, target);
	pa(a, b);
}
