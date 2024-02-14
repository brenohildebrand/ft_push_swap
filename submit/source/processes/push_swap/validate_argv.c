/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:59:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/10 16:23:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_for_integers(char *argv[])
{
	unsigned int	i;
	t_string		string;

	i = 1;
	while (argv[i])
	{
		string = string_create(argv[i]);
		if (!string_is_int(string))
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
	int	i;
	int	j;
	int	k;

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
