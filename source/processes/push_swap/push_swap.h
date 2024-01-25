/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:03:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/25 01:45:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "pair.h"

# include <stdlib.h>
# include <unistd.h>

# include "turk.h"

void	validate_arguments(int argc, char *argv[]);
t_pair	create_both_stacks(void);
void	initialize_first_stack(t_stack first, char *argv[]);
void	destroy_both_stacks(t_pair pair);

#endif