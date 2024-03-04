/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:40:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 18:04:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rrr(void)
{
	t_list	alpha;
	t_list	beta;
	
	alpha = any_as_instance(retrieve("alpha"));
	beta = any_as_instance(retrieve("beta"));
	reverse_rotate(alpha);
	reverse_rotate(beta);
	display("rrr\n");
}
