/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:03:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 05:01:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "framework.h"
# include "string.h"

# include <stdlib.h>
# include <unistd.h>

// void	initialize_first_stack(t_stack first, char *argv[]);
void	validate_argc(int argc);
void	validate_arguments(int argc, char *argv[]);
void	validate_argv(char *argv[]);

#endif