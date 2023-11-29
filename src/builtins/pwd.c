/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:33:25 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:33:27 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/minishell.h"

int	ft_pwd(t_env *env)
{
	char	*pwd;

	(void)env;
	pwd = getcwd(NULL, 0);
	ft_putstr_fd(pwd, 1, 0);
	ft_putchar_fd('\n', 1);
	return (0);
}
