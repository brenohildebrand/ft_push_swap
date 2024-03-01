/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_and_share_stacks.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:51:52 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 11:25:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_and_share_stacks(void)
{
	t_list	alpha;
	t_list	beta;
	
	alpha = create(list);
	beta = create(list);
	share("alpha", as_any(alpha));
	share("beta", as_any(beta));
}
