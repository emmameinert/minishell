/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pid.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:35:02 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:35:06 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishell.h"

int	*allocate_pids(int pid_count)
{
	int	*pids;

	pids = ft_calloc(pid_count, sizeof(*pids));
	if (!pids)
		malloc_error();
	return (pids);
}
