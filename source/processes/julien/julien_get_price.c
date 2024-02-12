/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_get_price.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:02:20 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 16:19:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

static int	get_r_r(t_stack a, t_stack b, int origin, int target)
{
	int	r_r;
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
	r_r = min + abs + 1;
	return (r_r);
}

static int	get_r_rr(t_stack a, t_stack b, int origin, int target)
{
	int	r_rr;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	r_rr = target + (stack_get_height(b) - origin) + 1;
	return (r_rr);
}

static int	get_rr_r(t_stack a, t_stack b, int origin, int target)
{
	int	rr_r;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	rr_r = (stack_get_height(a) - target) + origin + 1;
	return (rr_r);
}

static int	get_rr_rr(t_stack a, t_stack b, int origin, int target)
{
	int	rr_rr;
	int	min;
	int	abs;
	int	rda;
	int	rdb;
	
	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	rda = stack_get_height(a) - target;
	rdb = stack_get_height(b) - origin;
	if (rda < rdb)
	{
		min = rda;
		abs = rdb - rda;
	}
	else
	{
		min = rdb;
		abs = rdb - rda;
	}
	rr_rr = min + abs + 1;
	return (rr_rr);
}

int	julien_get_price(t_stack a, t_stack b, int origin, int target)
{
	int	r_r;
	int	r_rr;
	int	rr_r;
	int	rr_rr;

	r_r = get_r_r(a, b, origin, target);
	r_rr = get_r_rr(a, b, origin, target);
	rr_r = get_rr_r(a, b, origin, target);
	rr_rr = get_rr_rr(a, b, origin, target);
	
	if (r_r <= r_rr && r_r <= rr_r && r_r <= rr_rr)
		return (r_r);
	else if (r_rr <= r_r && r_rr <= rr_r && r_rr <= rr_rr)
		return (r_rr);
	else if (rr_r <= r_r && rr_r <= r_rr && rr_r <= rr_rr)
		return (rr_r);
	else
		return (rr_rr);
}
