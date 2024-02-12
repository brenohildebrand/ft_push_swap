/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:39:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 17:41:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Push
// -- Push origin from stack b to the top of target in stack a

static void	r_r(t_stack a, t_stack b, int origin, int target)
{
	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	while (origin--)
		stack_rotate(b);
	while (target--)
		stack_rotate(a);
}

static void	r_rr(t_stack a, t_stack b, int origin, int target)
{
	int	rbd;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	while (target--)
		stack_rotate(a);
	rbd = stack_get_height(b) - origin;
	while (rbd--)
		stack_reverse_rotate(b);
}

static void	rr_r(t_stack a, t_stack b, int origin, int target)
{
	int	rda;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	while (origin--)
		stack_rotate(b);
	rda = stack_get_height(a) - target;
	while (rda--)
		stack_reverse_rotate(a);
}

static void	rr_rr(t_stack a, t_stack b, int origin, int target)
{
	int	rda;
	int	rdb;

	(void)a;
	(void)b;
	(void)origin;
	(void)target;
	rda = stack_get_height(a) - target;
	rdb = stack_get_height(b) - origin;
	while (rda--)
		stack_reverse_rotate(a);
	while (rdb--)
		stack_reverse_rotate(b);
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
	stack_push(a, stack_pop(b));
}
