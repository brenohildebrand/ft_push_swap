/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_keep_lss.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:59:14 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 20:42:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

// -- Keep lss.
// -- Pushes all but the longest sorted subsequence to stack_b.

// O (n^2)
// -- The idea to solve this it to initialize an array lss 2 * stack_get_height
// -- solve for lss[0]
// -- then for lss[i]
// -- look for the maximum valid before i
// -- and add 1 to it.

void	julien_keep_lss(t_stack a, t_stack b)
{
	t_u32	*lss;
	t_u32	i;

	lss = allocate(2 * stack_get_height(a));
	i = stack_get_height(a);
	while (i--)
		lss[i] = 0;
	i = stack_get_height(a);
	while (i--)
	{
		// go through a front and see 
	}
	deallocate(lss);
}
