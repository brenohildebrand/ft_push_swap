/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cheaper_from_first_to_second.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:56:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 17:38:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

void	push_cheaper_from_first_to_second(t_pair stacks)
{
	int	i;
	int	j;
	int	best_i;
	int	best_j;
	int best_price;

	best_price = -1;
	i = stack_get_height(stacks->first);
	while (i--)
	{
		j = get_first_less_than(stacks, i);
		// best_price = update_price(); 

		if (best_price == -1 || best_price > get_price(stacks, i, j))
		{
			best_price = get_price(stacks, i, j);
			best_i = i;
			best_j = j;
		}
	}
	push_from_first_to_second(stacks, i, j);
}
