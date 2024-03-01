/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:19:57 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 11:05:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	validate_argc(t_i32 argc);
static void	validate_argv(t_i32 argc, t_i8 *argv[]);

void	validate_arguments(t_i32 argc, t_i8 *argv[])
{
	validate_argc(argc);
	validate_argv(argc, argv);
}

static void	validate_argc(t_i32 argc)
{
	if (argc == 1)
	{
		display("Usage ./push_swap <list of integers>\n");
		quit(1);
	}
}

static void	validate_argv(t_i32 argc, t_i8 *argv[])
{
	t_i32		i;

	i = argc - 1;
	while (i >= 1)
	{
		if (!i8_sequence_is_i32(argv[i]))
		{
			display("Huh?! The argument '");
			display(argv[i]);
			display("' cannot be converted to an int. Aborting!\n");
			quit(1);
		}
		i--;
	}
}
