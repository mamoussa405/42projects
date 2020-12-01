/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:52:12 by mamoussa          #+#    #+#             */
/*   Updated: 2020/11/29 17:13:57 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

size_t    ft_env_helper(void)
{
    if (ft_strncmp("env", g_cmd_head->string, ft_strlen(g_cmd_head->string)))
    {
        ft_error(g_cmd_head->string);
        write(2, ": command not found\n", ft_strlen(": command not found\n"));
        return (1);
    }
    return (0);
}

void    ft_env_helper2(t_env *current)
{
    if (g_is_out)
    {
        dup2(g_fd_out, 1);
        close(g_fd_out);
    }
    while (current)
    {
        write(1, current->key, ft_strlen(current->key));
        write(1, "=", 1);
        write(1, current->value, ft_strlen(current->value));
        write(1, "\n", 1);
        current = current->next;
    }
    exit(0);
}

void	ft_env(t_pipe *cur)
{
    t_env   *current;
    pid_t   pid;

    cur = NULL;
    if (ft_env_helper())
        return ;
    g_cmd_head = g_cmd_head->next;
    if (g_cmd_head)
    {
        write(2, "env: ", ft_strlen("env: "));
        write(2, g_cmd_head->string, ft_strlen(g_cmd_head->string));
        write(2, ": No such file or directory\n",
        ft_strlen(": No such file or directory\n"));
        return ;
    }
    current = g_env_head;
    if ((pid = fork()) < 0)
        return ;
    if (pid == 0)
        ft_env_helper2(current);
    else
    {
        wait(NULL);
    }
}
