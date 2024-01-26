/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_price.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 00:17:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 00:18:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

int	calculate_price(t_pair stacks, int i, int j, int possibility)
{
	int	ri;
	int	rj;

	ri = stack_get_height(stacks->first) - i;
	rj = stack_get_height(stacks->second) - j;
	if (possibility == 0)
		return (min(i, j) + max(i, j) - min(i, j) + 1);
	else if (possibility == 1)
		return (i + rj + 1);
	else if (possibility == 2)
		return (ri + j + 1);
	else
		return (min(ri, rj) + max(ri, rj) - min(ri, rj) + 1);
}