/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 20:53:00 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	validate_argc(t_i32 argc)
{
	if (argc == 1)
	{
		display("Usage ./push_swap <list of integers>\n");
		quit();
	}
}

static void	validate_argv(t_i32 argc, t_i8 *argv[])
{
	t_i32		i;

	i = argc - 1;
	while (i >= 1)
	{
		if (!cstring_is_i32(argv[i]))
		{
			display("Huh?! The argument '");
			display(argv[i]);
			display("' cannot be converted to an int. Aborting!\n");
			quit();
		}
		i--;
	}
}

static void	validate_arguments(t_i32 argc, t_i8 *argv[])
{
	validate_argc(argc);
	validate_argv(argc, argv);
}

t_i32	push_swap(t_i32 argc, t_i8 *argv[])
{
	validate_arguments(argc, argv);
	return (0);
}
