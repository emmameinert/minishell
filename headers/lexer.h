/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:28:15 by emeinert          #+#    #+#             */
/*   Updated: 2023/08/21 17:28:17 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_H
# define LEXER_H

// PinkShell color stuf
# define PINK "\x1b[38;2;255;192;203m"
# define BORING "\x1b[0m"

# include "minishell.h"

# include <stdbool.h>

typedef struct s_env	t_env;

typedef struct s_lexer
{
	int		i;
	int		j;
	int		del_len;
	char	**arr;
	char	**new_arr;
}	t_lexer;

/*add_lines_lexer.c*/
char	**add_line(t_lexer *l);
int		case_operand(t_lexer *l);

/*char_checks.c*/
bool	is_delim(char c);
bool	is_operand(char c);
int		quote_index(char *str, int j);
int		double_redir(char *str, int j);

/*lexer_utils.c*/
int		syntax_error_msg(int i, char *str);
char	**allocate_2d_array(char **old_array);
int		trim_last_line(char **array, int line_index);
int		check_if_nothing(char *str, int i);
int		quote_check(char *str, int i, char quote);

/*lexer.c*/
char	**ft_lexer(char *str);

/*syntax_error.c*/
int		syntax_error(char *str, int i);

#endif
