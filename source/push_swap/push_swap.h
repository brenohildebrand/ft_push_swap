/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:21:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 08:17:32 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "small_sort.h"
#include "radix.h"

void	check_if_it_is_already_sorted(void);
void	create_and_share_stacks(void);
void	fill_alpha_with_arguments(t_i32 argc, t_i8 *argv[]);
t_i32	push_swap(t_i32 argc, t_i8 *argv[]);
void	solve_for_less_than_six(void);
void	solve_for_more_than_five(void);
void	validate_arguments(t_i32 argc, t_i8 *argv[]);

#endif