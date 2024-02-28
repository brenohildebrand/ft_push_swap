/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:02:02 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/13 15:50:08 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien(t_stack a, t_stack b)
{
	if (stack_get_height(a) == 1)
	{
		julien_for_one(a, b);
	}
	else if (stack_get_height(a) == 2)
	{
		julien_for_two(a, b);
	}
	else if (stack_get_height(a) == 3)
	{
		julien_for_three(a, b);
	}
	else if (stack_get_height(a) == 4)
	{
		julien_for_four(a, b);
	}
	else if (stack_get_height(a) == 5)
	{
		julien_for_five(a, b);
	}
	else
	{
		julien_for_more_than_five(a, b);
	}
}
