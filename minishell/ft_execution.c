/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execution.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:54:49 by mamoussa          #+#    #+#             */
/*   Updated: 2020/11/30 17:33:51 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	glob_var_init(void)
{
	g_fd_in = 0;
	g_fd_out = 0;
	g_is_in = 0;
	g_is_out = 0;
}

void	ft_exec_helper(void)
{
	t_cmd	*current;
	t_pipe	*new_node;
	size_t	index;

	g_pipe_head = NULL;
	current = g_cmd_head;
	index = 0;
	while (current)
	{
		if (current->type == cmd)
		{
			new_node = new_node_index(index);
			add_back(new_node);
			index++;
		}
		else if (current->type == semicolumn)
			index = 0;
		current = current->next;
	}
}

void 	close_all(void)
{
	t_pipe *cur;

	cur = g_pipe_head;
	while (cur)
	{
		if (cur->fd0 > 2)
			close(cur->fd0);
		if (cur->fd1 > 2)
			close(cur->fd1);
		cur = cur->next;
	}
}
void	ft_execution(char *line, t_cmd *tmp)
{
	t_pipe *cur;

	ft_exec_helper();
	cur = g_pipe_head;
	while (g_cmd_head)
	{
		glob_var_init();
		if (check_for_red())
			return ;
		ft_pipes(g_cmd_head, cur);
		if (g_cmd_head->type == cmd)
		{
				if (!ft_strncmp(g_cmd_head->string, "cd", ft_strlen("cd")))
					ft_cd();
				else if (!ft_strncmp(g_cmd_head->string, "exit", ft_strlen("exit")))
					ft_exit(line, tmp);
				else if (!ft_strncmp(g_cmd_head->string, "unset", ft_strlen("unset")))
					ft_unset();
				else if (!ft_strncmp(g_cmd_head->string, "env", ft_strlen("env")))
					ft_env(cur);
				else if (!ft_strncmp(g_cmd_head->string, "export", ft_strlen("export")))
					ft_export(cur);
				else if (fork() == 0)
				{
					if (!ft_strncmp(g_cmd_head->string, "echo", ft_strlen("echo")))
						ft_echo(cur);
					else if (!ft_strncmp(g_cmd_head->string, "pwd", ft_strlen("pwd")))
						ft_pwd(cur);
					else
						ft_not_builtin(cur);
					exit(0);
				}
			cur = cur->next;
		}
		g_cmd_head = (g_cmd_head) ? g_cmd_head->next : g_cmd_head;
	}
	close_all();
	// close(fd[0]);
	// close(fd[1]);
	while(wait(NULL) != -1);
}
