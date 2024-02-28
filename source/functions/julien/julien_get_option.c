/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_get_option.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:57:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 16:09:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

static int	get_rr_rr(t_stack a, t_stack b, int origin, int target)
{
	int	rr_rr;
	int	min;
	int	abs;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	if (origin < target)
	{
		min = origin;
		abs = target - origin;
	}
	else
	{
		min = target;
		abs = origin - target;
	}
	rr_rr = min + abs + 1;
	return (rr_rr);
}

static int	get_rr_r(t_stack a, t_stack b, int origin, int target)
{
	int	rr_r;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	rr_r = target + (stack_get_height(b) - origin) + 1;
	return (rr_r);
}

static int	get_r_rr(t_stack a, t_stack b, int origin, int target)
{
	int	r_rr;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	r_rr = (stack_get_height(a) - target) + origin + 1;
	return (r_rr);
}

static int	get_r_r(t_stack a, t_stack b, int origin, int target)
{
	int	r_r;
	int	min;
	int	abs;
	int	ra;
	int	rb;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	ra = stack_get_height(a) - target;
	rb = stack_get_height(b) - origin;
	if (ra < rb)
	{
		min = ra;
		abs = rb - ra;
	}
	else
	{
		min = rb;
		abs = ra - rb;
	}
	r_r = min + abs + 1;
	return (r_r);
}

int	julien_get_option(t_stack a, t_stack b, int origin, int target)
{
	int	r_r;
	int	r_rr;
	int	rr_r;
	int	rr_rr;

	origin += 1;
	target += 1;
	r_r = get_r_r(a, b, origin, target);
	r_rr = get_r_rr(a, b, origin, target);
	rr_r = get_rr_r(a, b, origin, target);
	rr_rr = get_rr_rr(a, b, origin, target);
	if (r_r <= r_rr && r_r <= rr_r && r_r <= rr_rr)
		return (0);
	else if (r_rr <= r_r && r_rr <= rr_r && r_rr <= rr_rr)
		return (1);
	else if (rr_r <= r_r && rr_r <= r_rr && rr_r <= rr_rr)
		return (2);
	else
		return (3);
}
