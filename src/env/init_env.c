/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:36:39 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:36:41 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishell.h"

static char	*find_key(char *env_line, int del_index)
{
	char	*key;

	key = ft_substr(env_line, 0, del_index);
	if (key == NULL)
		return (NULL);
	return (key);
}

static char	*find_value(char *env_line, int del_index)
{
	char	*value;

	value = ft_substr(env_line, del_index, ft_strlen(env_line) - del_index);
	if (value == NULL)
		return (NULL);
	return (value);
}

static t_env	*init_env(void)
{
	t_env	*env;

	env = ft_calloc(1, sizeof(*env));
	return (env);
}

void	fill_env(char **envp, t_env **env)
{
	char	*env_key;
	int		del_index;
	char	*env_value;
	int		i;

	(*env) = init_env();
	i = 0;
	while (envp[i])
	{
		del_index = ft_strchr_index(envp[i], '=');
		env_key = find_key(envp[i], del_index);
		env_value = find_value(envp[i], del_index + 1);
		if (env_key == NULL || env_value == NULL)
			return ;
		(*env)->vars = set_value((*env)->vars, env_key, env_value);
		i++;
	}
}
