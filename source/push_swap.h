/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:21:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 17:58:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

void	create_and_share_stacks(void);
void	fill_alpha_with_arguments(t_i32 argc, t_i8 *argv[]);
t_i32	push_swap(t_i32 argc, t_i8 *argv[]);
void	validate_arguments(t_i32 argc, t_i8 *argv[]);

#endif