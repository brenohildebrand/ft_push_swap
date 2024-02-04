/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_for_more_than_five.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:22:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 20:51:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien_for_more_than_five(t_stack a, t_stack b)
{
	julien_keep_lss(a, b);
	while (stack_get_height(b))
		julien_push_cheapest(a, b);
	// reorder stack A to make sure the least number is at the top
}
