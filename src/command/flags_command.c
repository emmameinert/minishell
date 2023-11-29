/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:33:56 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:33:58 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishell.h"

char	*parse_flags(char **input, int	*index)
{
	int	cur_index;

	cur_index = *index;
	if (input[*index][0] == '-')
	{
		(*index)++;
		return (input[cur_index]);
	}
	else
		return (NULL);
}

void	put_to_flags(t_command **cmd, int track, char *str)
{
	if (str == NULL)
		(*cmd)[track].flags = NULL;
	else
	{
		(*cmd)[track].flags = ft_strdup(str);
		if (!(*cmd)[track].flags)
			malloc_error();
	}
}
