/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:08:51 by mbani             #+#    #+#             */
/*   Updated: 2020/12/05 16:14:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHELL_H
# define _SHELL_H
#include "libft/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

typedef struct		s_env
{
	char			*key;
	char			*value;
	struct s_env	*next;
}					t_env;
enum	e_type
{
	cmd, arg, pipee, semicolumn, input_red, output_red, append_output
};
enum	e_quotes
{
	none, opened, closed
};
typedef struct	s_pipe
{
	size_t			index;
	size_t			fd0;
	size_t			fd1;
	struct s_pipe	*next;
	struct s_pipe	*prev;
}				t_pipe;	
typedef struct	s_cmd
{
	char *			string;
	enum e_type		type;
	struct s_cmd	*next;
}				t_cmd;
typedef struct s_expan
{
	enum e_quotes sng;
	enum e_quotes dbl;
}				t_expan;

t_env	*g_env_head;
t_cmd	*g_cmd_head;
t_pipe	*g_pipe_head;
char	*g_tmp;
char	**g_tmp_env;
int		g_fd_in;
int		g_fd_out;
size_t	g_is_in;
size_t	g_is_out;
int		g_status;
size_t	g_is_sigint;
size_t	g_is_cmd;
size_t 	g_is_sort;
size_t	g_is_eof;
char	*g_buff;
t_env	*ft_lstnewenv(char *key, char *value);
void	ft_lstadd_backenv(t_env **alst, t_env *new);
void	ft_lstclearenv(t_env **lst);
t_cmd	*ft_lstnew_cmd(char *string, enum e_type t);
void	ft_lstadd_backcmd(t_cmd **alst, t_cmd *new);
void	ft_lstclearcmd(t_cmd **lst);
void	ft_cd(void);
void	ft_echo(t_pipe *cur);
void	ft_env(t_pipe *cur);
void	ft_error(const char *error);
void	ft_execution(char *line, t_cmd *tmp);
void	ft_export(t_pipe *cur);
void	ft_not_builtin(t_pipe *cur);
void	ft_pwd(t_pipe *cur);
void	ft_unset(void);
char	**path_spliter(void);
void	simple_pointer_free(char *ptr);
void	double_pointer_free(char **ptr);
void	str_cpy(char **dst, char **src);
size_t	ft_cd_helper(void);
char	*check_for_home(void);
void	cpy_env(char **envp);
void	ft_exit(char *line, t_cmd *tmp);
void	print_in_sort(t_pipe *cur);
size_t	echo_error_checker(void);
size_t	check_for_red(void);
t_cmd	*remove_red(t_cmd *ptr);
void	glob_var_init(void);
void	add_back_cmd(t_cmd *head, t_cmd *new_node);
void	cmd_count(void);
void	pipe_count(void);
void	search_for_pipe(t_cmd *head);
void	open_pipes(void);
t_env	*node_cpy(void);
t_pipe	*new_node_index(size_t index);
void	add_back(t_pipe *new_node);
void	clear_list(void);
void	ft_pipes(t_cmd *head, t_pipe *cur);
void	imp_red(void);
void	imp_pipes(t_pipe *cur);
char	*check_for_slash(char *str);
void	ft_exec2(t_pipe *cur, char *line, t_cmd *tmp);
void	ft_exec3(void);
void	free_pipe(void);
void	close_all(t_pipe *cur);
void	check_for_red2(t_cmd *cur);
t_cmd	*ptr_to_red(t_cmd *cur);
#endif