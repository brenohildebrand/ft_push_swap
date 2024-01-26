/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_possibility.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 23:09:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/26 20:14:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "turk.h"

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
		price = calculate_price(stacks, i, j, possibility);
		if (best_price == -1 || price < best_price)
		{
			best_price = price;
			best_possibility = possibility;
		}
		possibility++;
	}
	return (best_possibility);
}
