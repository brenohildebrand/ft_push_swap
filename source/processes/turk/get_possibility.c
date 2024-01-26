/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_possibility.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:09:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 23:10:12 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

int	calculate(t_pair stacks, int i, int j, int possibility)
{
	if (possibility == 0)
		return (i + j + 1);
	else if (possibility == 1)
		return (i + stack_get_height(stacks->second) - j + 1);
	else if (possibility == 2)
		return (stack_get_height(stacks->first) - i + j + 1);
	else
		return (stack_get_height(stacks->first) - i + \
				stacks_get_height(stacks->second) - j + 1);
}

int	get_possibility(t_pair stacks, int i, int j)
{
	int	possibility;
	int	best_possibility;
	int	best_price;
	int	price;

	best_price = -1;
	possibility = 0;
	while (possibility < 4)
	{
		price = calculate(stacks, i, j, possibility);
		if (best_price == -1 || price < best_price)
		{
			best_price = price;
			best_possibility = possibility;
		}
		possibility++;
	}
	return (best_possibility);
}