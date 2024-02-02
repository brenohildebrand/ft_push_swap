/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:59:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/02 05:27:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_for_integers(char *argv[])
{
	t_u32		i;
	t_string	string;

	i = 1;
	while (argv[i])
	{
		string = string_build(argv[i]);
		if (!string_is_integer(string))
		{
			print("All given numbers should fit in a 32-bit integer.");
			string_destroy(string);
			exit(1);
		}
		string_destroy(string);
		i++;
	}
}

static void	check_for_duplicates(char *argv[])
{
	t_u32	i;
	t_u32	j;
	t_u32	k;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			k = 0;
			while (argv[i][k] && argv[j][k] && argv[i][k] == argv[j][k])
				k++;
			if (argv[i][k] == argv[j][k])
			{
				print("All given numbers should be different.");
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	validate_argv(char *argv[])
{
	check_for_integers(argv);
	check_for_duplicates(argv);
}
