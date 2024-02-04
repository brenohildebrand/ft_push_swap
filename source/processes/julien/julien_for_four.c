/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien_for_four.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:22:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/04 19:46:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "julien.h"

void	julien_for_four(t_stack a, t_stack b)
{
	stack_push(b, stack_pop(a));
	print("pb");
	julien_for_three(a, b);
	julien_push_cheapest(a, b);	
}
