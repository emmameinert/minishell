/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shlvl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:35:59 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:36:01 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishell.h"

static void	unset_oldpwd(t_node **temp)
{
	if (get_value(temp, "OLDPWD"))
		delete_value(temp, "OLDPWD");
}

void	add_shlvl(t_env **env)
{
	t_node	*temp;
	int		shlvl;

	temp = get_value((*env)->vars, "SHLVL");
	shlvl = (int)ft_atoll(temp->value);
	if (shlvl < 0)
		shlvl = 0;
	free(temp->value);
	temp->value = ft_itoa(shlvl + 1);
	unset_oldpwd(&temp);
}
