/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:03:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/12 14:36:45 by bhildebr         ###   ########.fr       */
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

#endif