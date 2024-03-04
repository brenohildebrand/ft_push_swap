/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:39:22 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 18:04:49 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ss(void)
{
	t_list	alpha;
	t_list	beta;
	
	alpha = any_as_instance(retrieve("alpha"));
	beta = any_as_instance(retrieve("beta"));
	swap(alpha);
	swap(beta);
	display("ss\n");
}
