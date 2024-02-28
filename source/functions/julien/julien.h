/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julien.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:55:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/20 19:21:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JULIEN_H
# define JULIEN_H

# include "push_swap.h"
# include "integer.h"
# include "stack.h"

void		julien(
				t_stack a, 
				t_stack b);
void		julien_for_one(
				t_stack a, 
				t_stack b);
void		julien_for_two(
				t_stack a, 
				t_stack b);
void		julien_for_three(
				t_stack a, 
				t_stack b);
void		julien_for_four(
				t_stack a, 
				t_stack b);
void		julien_for_five(
				t_stack a,
				t_stack b);
void		julien_for_more_than_five(
				t_stack a,
				t_stack b);
void		julien_push_cheapest(
				t_stack a,
				t_stack b);
int			julien_get_price(
				t_stack a,
				t_stack b,
				int origin,
				int target);
int			julien_get_option(
				t_stack a,
				t_stack b,
				int origin,
				int target);
void		julien_push(
				t_stack a,
				t_stack b,
				int origin,
				int target);
void		julien_adjust_a(
				t_stack a,
				t_stack b);

#endif