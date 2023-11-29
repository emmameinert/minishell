/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:31:05 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:31:07 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../headers/lexer.h"

void	ft_putstr_fd(char *s, int fd, int print_shellname)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	if (print_shellname)
		ft_putstr_fd(PINK"PinkShell: "BORING, fd, 0);
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
