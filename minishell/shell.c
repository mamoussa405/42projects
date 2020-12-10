/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 17:54:10 by mbani             #+#    #+#             */
/*   Updated: 2020/12/10 20:23:11 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "shell.h"

int		add_to_list_bulk(char **tmp, char **op, int *i, int *j)
{
	enum e_type t;

	if (g_x == 0)
		t = cmd;
	else
		t = arg;
	if (*tmp[0])
		add_to_list(tmp, t);
	if (*j == 1 && *op[0])
	{
		t = operators_check(op[0]);
		add_to_list(op, t);
		free(*tmp);
		*tmp = NULL;
	}
	if (t == pipee || t == semicolumn)
		g_x = 0;
	else
		g_x -= 10;
	*j = 0;
	return (*i);
}

void	line_parser(char *line)
{
	g_cmd_head = NULL;
	g_x = 0;
	line = rm_spaces(line);
	line_split(line);
	if (line[0])
		param_expansion(g_cmd_head);
}

void	sig_handler(int seg)
{
	g_is_sigint = 0;
	if (seg == SIGINT && !g_is_cmd)
			write(1, "\nminishell-2.0$\t", 18);
	else
		g_is_sigint = 1;
	if (seg == SIGQUIT && !g_is_cmd)
		write(1, "\b\b", 2);
	else if (!g_is_sort && seg == SIGQUIT)
		write(1, "Quit: 3", 7);
}

int		main(int argc, char  **argv, char **envp)
{
	int ret;
	char *line;

	(void) argc;
	(void) argv;
	cpy_env(envp);
	env_var(envp);
	signal(SIGINT, sig_handler);
	signal(SIGQUIT, sig_handler);
	line = NULL;
	while (1)
	{
		if (!line)
			write(1, "minishell-2.0$ ", 15);
		g_tmp = NULL;
		ret = get_next_line(0, &line);
		if (!ret)
		{
			write(1, "exit", 4);
			ft_exit(line, g_tmp_cmd);
		}
		line_parser(line);
		g_tmp_cmd = g_cmd_head;
		if (g_tmp_cmd && (syntax_error(g_tmp_cmd)) && (swap_lst(&g_tmp_cmd)) &&( add_echo(&g_tmp_cmd)))
		{
			g_cmd_head = g_tmp_cmd;
			ft_execution(line, g_tmp_cmd);
		}		
		if (g_tmp_cmd)
			ft_lstclearcmd(&g_tmp_cmd);
		free(line);
		line = 	NULL;
		free(g_buff);
		g_buff = NULL;
	}
	free(line);
	ft_lstclearenv(&g_env_head);
	if (g_tmp_cmd)
		ft_lstclearcmd(&g_tmp_cmd);
	if (g_tmp_env)
		double_pointer_free(g_tmp_env);
	return (0);
}
