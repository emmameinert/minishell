# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: Invalid date        by                   #+#    #+#              #
#    Updated: 2023/08/21 17:33:36 by jhusso           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = minishell

BUILD_FLAGS = -Wall -Wextra -Werror -g

SRC := src/builtins/cd.c \
		src/builtins/echo.c \
		src/builtins/execve.c \
		src/builtins/exit.c \
		src/builtins/export.c \
		src/builtins/heredoc_expand.c \
		src/builtins/heredoc.c \
		src/builtins/pwd.c \
		src/builtins/unset.c \
		src/command/add_command.c \
		src/command/concatenate_struct.c \
		src/command/flags_command.c \
		src/command/full_command.c \
		src/command/heredoc_command.c \
		src/command/init_command.c \
		src/command/input_command.c \
		src/command/redir_command.c \
		src/common/executer.c \
		src/common/file_checker.c \
		src/common/file.c \
		src/common/free.c \
		src/common/malloc_error.c \
		src/common/pid.c \
		src/common/pipe.c \
		src/common/redirection.c \
		src/common/save_exit_status.c \
		src/common/shlvl.c \
		src/common/signal.c \
		src/env/env.c\
		src/env/init_env.c \
		src/hashmap/add_hashmap.c \
		src/hashmap/clear_hashmap.c \
		src/hashmap/utils_hashmap.c \
		src/lexer/add_lines_lexer.c \
		src/lexer/char_checks.c \
		src/lexer/lexer_utils.c \
		src/lexer/lexer.c \
		src/lexer/syntax_error.c \
		src/parser/concatenate.c \
		src/parser/expand_env_utils.c \
		src/parser/expand_env.c \
		src/parser/parser_special.c \
		src/parser/parser_utils.c \
		main.c \

OBJ := cd.o \
		echo.o \
		execve.o \
		exit.o \
		export.o \
		heredoc_expand.o \
		heredoc.o \
		pwd.o \
		unset.o \
		add_command.o \
		concatenate_struct.o \
		flags_command.o \
		full_command.o \
		heredoc_command.o \
		init_command.o \
		input_command.o \
		redir_command.o \
		executer.o \
		file_checker.o \
		file.o \
		free.o \
		malloc_error.o \
		pid.o \
		pipe.o \
		redirection.o \
		save_exit_status.o \
		shlvl.o \
		signal.o \
		env.o \
		init_env.o \
		add_hashmap.o \
		clear_hashmap.o \
		utils_hashmap.o \
		add_lines_lexer.o \
		char_checks.o \
		lexer_utils.o \
		lexer.o \
		syntax_error.o \
		concatenate.o \
		expand_env_utils.o \
		expand_env.o \
		parser_special.o \
		parser_utils.o \
		main.o \

HEADERS = headers/hashmap.h, headers/lexer.h, headers/minishell.h, headers/parsing.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) libft/libft.a
	cc -o $(NAME) -Llibft -lft -lreadline -L ~/.brew/opt/readline/lib -I ~/.brew/opt/readline/include $(BUILD_FLAGS) $(OBJ)

$(OBJ): $(SRC)
	cc -c -I libft -I ~/.brew/opt/readline/include $(BUILD_FLAGS) $(SRC)

libft/libft.a:
	make -C libft

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all
