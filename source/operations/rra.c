/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:40:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/04 18:03:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rra(void)
{
	t_list	alpha;
	
	alpha = any_as_instance(retrieve("alpha"));
	reverse_rotate(alpha);
	display("rra\n");
}
