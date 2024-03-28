/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:04:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:51:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "utils.h"

static void	validate_argc(t_i32 argc)
{
	if (argc == 1)
	{
		print_to_stdout("Usage ./push_swap <list of integers>\n");
		quit(1);
	}
}

static void	validate_argv(t_i32 argc, t_i8 *argv[])
{
	(void)argc;
	(void)argv;
	return ;
}

void	validate_arguments(t_i32 argc, t_i8 *argv[])
{
	validate_argc(argc);
	validate_argv(argc, argv);
}
