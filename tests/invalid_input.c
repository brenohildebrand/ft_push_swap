/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:11:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/05 14:29:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	t1(void);
void	t2(void);
void	t3(void);
void	t4(void);

t_i32	main(void)
{
	assert(forkrun(t1) == 1);
	assert(forkrun(t2) == 1);
	assert(forkrun(t3) == 1);
	assert(forkrun(t4) == 1);
	assert(run(1, "./push_swap 1", push_swap));
	return (0);
}

void	t1(void)
{
	t_i32	argc;
	t_i8	*argv[2];

	argc = 2;
	argv[0] = "./push_swap";
	argv[1] = "ko";
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

void	t4(void)
{
	t_i32	argc;
	t_i8	*argv[4];

	argc = 4;
	argv[0] = "./push_swap";
	argv[1] = "1";
	argv[2] = "1";
	argv[3] = "1";
	validate_arguments(argc, argv);
}
