/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 21:22:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 16:03:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	t1(void);
void	t2(void);
void	t3(void);

t_i32	main(void)
{
	assert(forkrun(t1) == 0);
	assert(forkrun(t2) == 1);
	assert(forkrun(t3) == 0);
	return (0);
}

void	t1(void)
{
	t_i32	argc;
	t_i8	*argv[4];

	argc = 4;
	argv[0] = "./push_swap";
	argv[1] = "1";
	argv[2] = "2";
	argv[3] = "3";
	validate_arguments(argc, argv);
}

void	t2(void)
{
	t_i32	argc;
	t_i8	*argv[4];

	argc = 4;
	argv[0] = "./push_swap";
	argv[1] = "a";
	argv[2] = "b";
	argv[3] = "c";
	validate_arguments(argc, argv);
}

void	t3(void)
{
	t_i32	argc;
	t_i8	*argv[4];

	argc = 4;
	argv[0] = "./push_swap";
	argv[1] = "-42";
	argv[2] = "  003";
	argv[3] = "1223";
	validate_arguments(argc, argv);
}
