/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:39:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 18:04:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sb(void)
{
	t_list	beta;

	beta = any_as_instance(retrieve("beta"));
	swap(beta);
	display("sb\n");
}