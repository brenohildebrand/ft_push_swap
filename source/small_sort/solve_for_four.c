/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_for_four.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:37:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 12:58:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "small_sort.h"

void	solve_for_four(void)
{
	put_smallest_on_top();
	pb();
	solve_for_three();
	pa();
}
