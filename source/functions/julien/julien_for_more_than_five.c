/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_for_more_than_five.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:22:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/20 19:52:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien_for_more_than_five(t_stack a, t_stack b)
{
	// oh_no_call_radix(a, b);

	while (stack_get_height(a) > 3)
		pb(a, b);
	julien_for_three(a, b);
	while (stack_get_height(b) > 0)
		julien_push_cheapest(a, b);
	julien_adjust_a(a, b);
}
