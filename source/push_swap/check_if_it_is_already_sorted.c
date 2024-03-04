/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_it_is_already_sorted.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:38:50 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 15:24:57 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// -- checking is_sorted with ! because the numbers were
// -- inserted in reverse order.

void	check_if_it_is_already_sorted(void)
{
	t_list	alpha;
	
	alpha = any_as_instance(retrieve("alpha"));
	if (!is_sorted(alpha))
	{
		quit(0);
	}
}
