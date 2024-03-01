/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_and_share_stacks.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:29:05 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 18:43:41 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_i32	main(void)
{
	create_and_share_stacks();
	assert(retrieve("alpha")->type == list());
	assert(retrieve("beta")->type == list());
	any_destroy(retrieve("alpha"));
	any_destroy(retrieve("beta"));
	map_destroy(framework_get()->map);
	return (0);
}
