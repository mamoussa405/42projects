/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:03:41 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/02 12:01:26 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

size_t	check_for_n()
{
	t_cmd	*current;

	current = g_cmd_head;
	while (current && (current->type != semicolumn) && (current->type != pipee))
	{
		if	(!ft_strncmp(g_cmd_head->string, "-n", ft_strlen("-n")))
			return (1);
		current = current->next;
	}
	return (0);
}

void	input_out_red()
{
	if (g_is_out)
	{
		dup2(g_fd_out, 1);
		close(g_fd_out);
	}
}

void	ft_echo_helper(t_pipe *cur)
{
	size_t	is_n;

	is_n = 0;
	g_cmd_head = g_cmd_head->next;
	input_out_red();
	imp_pipes(cur);
	if (!g_cmd_head || (g_cmd_head->type == semicolumn) || (g_cmd_head->type == pipee))
	{
		write(1, "\n", 1);
		exit(0);
	}
	is_n = check_for_n();
	if (is_n)
		g_cmd_head = g_cmd_head->next;
	while (g_cmd_head && (g_cmd_head->type != semicolumn) && (g_cmd_head->type != pipee))
	{
		write(1, g_cmd_head->string, ft_strlen(g_cmd_head->string));
		g_cmd_head = g_cmd_head->next;
		if (g_cmd_head && (g_cmd_head->type != semicolumn) && (g_cmd_head->type != pipee))
			write(1, " ", 1);
	}
	if (!is_n)
		write(1, "\n", 1);
	exit(0);
}

void	ft_echo(t_pipe *cur)
{
	if (echo_error_checker())
		return ;
	ft_echo_helper(cur);
}
