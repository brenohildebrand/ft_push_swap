/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:39:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 13:46:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pb(void)
{
	t_list	alpha;
	t_list	beta;
	
	alpha = any_as_instance(retrieve("alpha"));
	beta = any_as_instance(retrieve("beta"));
	push(beta, pop(alpha));
	display("pb\n");
}
