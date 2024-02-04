/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_for_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:22:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 20:48:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien_for_five(t_stack a, t_stack b)
{
	stack_push(b, stack_pop(a));
	print("pb");
	stack_push(b, stack_pop(a));
	print("pb");
	julien_for_three(a, b);
	julien_push_cheapest(a, b);	
	julien_push_cheapest(a, b);	
}
