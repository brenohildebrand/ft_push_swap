/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:40:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 18:02:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

void	rr(void)
{
	t_list	alpha;
	t_list	beta;
	
	alpha = any_as_instance(retrieve("alpha"));
	beta = any_as_instance(retrieve("beta"));
	rotate(alpha);
	rotate(beta);
	display("rr\n");
}
