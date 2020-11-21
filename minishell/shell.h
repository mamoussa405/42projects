/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:08:51 by mbani             #+#    #+#             */
/*   Updated: 2020/11/21 11:04:41 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHELL_H
# define _SHELL_H
#include "libft/libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

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
char	*g_tmp;
size_t	g_is_out_app;
size_t	g_is_out;
size_t	g_is_int;
int		g_int_fd;
int		g_out_fd;
int		fdtmp;
int		fdtmp2;
t_env	*ft_lstnewenv(char *key, char *value);
void	ft_lstadd_backenv(t_env **alst, t_env *new);
void	ft_lstclearenv(t_env **lst);
t_cmd	*ft_lstnew_cmd(char *string, enum e_type t);
void	ft_lstadd_backcmd(t_cmd **alst, t_cmd *new);
void	ft_lstclearcmd(t_cmd **lst);
void	ft_cd(void);
void	ft_echo(void);
void	ft_env(void);
void	ft_error(const char *error);
void	ft_execution(void);
void	ft_export(void);
void	ft_not_builtin(void);
void	ft_pwd(void);
void	ft_unset(void);
char	**path_spliter(void);
void	simple_pointer_free(char *ptr);
void	double_pointer_free(char **ptr);

#endif