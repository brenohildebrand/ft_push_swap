/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:47:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/06 16:26:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "radix.h"

static void	map_number(t_any current, t_i32 index)
{
	static t_i32	counter = 0;
	t_map			indexes;

	(void)index;
	indexes = any_as_instance(retrieve("indexes"));
	set(indexes, current, i32_to_any(counter));
	counter++;
}

void	normalize(void)
{
	t_map	indexes;
	t_list	alpha;
	t_list	alpha_copy;

	indexes = create(map);
	share("indexes", as_any(indexes));
	alpha = any_as_instance(retrieve("alpha"));
	alpha_copy = copy(alpha);
	sort(alpha_copy);
	for_each(alpha_copy, map_number);
	destroy(alpha_copy);
}
