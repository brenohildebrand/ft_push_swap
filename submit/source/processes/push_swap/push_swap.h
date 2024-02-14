/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:03:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 19:02:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "julien.h"

# include "string.h"
# include "stack.h"

# include <stdlib.h>
# include <unistd.h>

int		push_swap(int argc, char *argv[]);
void	fill_stack_a(t_stack a, int argc, char *argv[]);
void	validate_arguments(int argc, char *argv[]);
void	validate_argc(int argc);
void	validate_argv(char *argv[]);

void	sa(t_stack a, t_stack b);
void	sb(t_stack a, t_stack b);
void	ss(t_stack a, t_stack b);
void	pa(t_stack a, t_stack b);
void	pb(t_stack a, t_stack b);
void	ra(t_stack a, t_stack b);
void	rb(t_stack a, t_stack b);
void	rr(t_stack a, t_stack b);
void	rra(t_stack a, t_stack b);
void	rrb(t_stack a, t_stack b);
void	rrr(t_stack a, t_stack b);

#endif