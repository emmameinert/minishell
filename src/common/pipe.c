/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipe.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:35:10 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:35:13 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishell.h"

static void	execute_child(t_command *current, int command_count, \
			t_env **env)
{
	if (current->id == 0)
		redirect_io(-2, g_info.pipe_fds[current->id * 2 + 1]);
	else if (current->id == command_count - 1)
		redirect_io(g_info.pipe_fds[(current->id * 2) - 2], -2);
	else
		redirect_io(g_info.pipe_fds[current->id * 2 - 2], \
		g_info.pipe_fds[current->id * 2 + 1]);
	if (current->token != NONE)
		redirect_files(current);
	execute_command(current, env, 1);
}

void	wait_children(int *pids, int count)
{
	int	i;
	int	status;

	i = 0;
	while (i <= count)
	{
		waitpid(pids[i], &status, 0);
		set_exit_code(WEXITSTATUS(status));
		i++;
	}
}

int	handle_pipe(t_command *commands, t_env **env, \
			int command_count)
{
	commands->pid = fork();
	if (commands->pid < 0)
		ft_putstr_fd("Forking error!", 2, 1);
	if (commands->pid == 0)
		execute_child(commands, command_count, env);
	return (commands->pid);
}
