/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:25:00 by bhildebr          #+#    #+#             */
/*   Updated: 2023/12/15 10:25:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

void	shared_destroy(t_shared shared)
{
	cllist_destroy(shared->stack_a);
	cllist_destroy(shared->stack_b);
}