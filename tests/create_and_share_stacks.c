/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_and_share_stacks.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:29:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/03 13:31:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_i32	main(void)
{
	framework_setup();
	create_and_share_stacks();
	assert(retrieve("alpha")->type == list());
	assert(retrieve("beta")->type == list());
	framework_teardown();
	return (0);
}
