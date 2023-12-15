/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:12:42 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 13:46:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.h"

int	main(int argc, char **argv)
{
	int			exit_code;
	t_program	program;

	program = program_create(argc, argv);
	exit_code = program_run(program);
	program_destroy(program);
	return (exit_code);
}
