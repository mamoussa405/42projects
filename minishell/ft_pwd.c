/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:45:49 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/02 11:19:34 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

size_t  erro_cheker(void)
{
    if(ft_strncmp("pwd", g_cmd_head->string, ft_strlen(g_cmd_head->string)))
    {
        ft_error("command not found\n");
        return (1);
    }
    g_cmd_head = g_cmd_head->next;
    if(g_cmd_head && (g_cmd_head->type != semicolumn) &&
    (g_cmd_head->type != pipee))
    {
        write(2, "pwd: too many arguments\n",
        ft_strlen("pwd: too many arguments\n"));
        return (1);
    }
    return (0);
}

void    ft_pwd_helper(char *buf, t_pipe *cur)
{
    if (g_is_out)
    {
        dup2(g_fd_out, 1);
        close(g_fd_out);
    }
    imp_pipes(cur);
    write(1, buf, ft_strlen(buf));
    write(1, "\n", 1);
    exit(0);
}

void	ft_pwd(t_pipe *cur)
{
    char    *buf;
    pid_t   pid;

    buf = NULL;
    if(erro_cheker())
        return ;
    buf = getcwd(buf, 0);
    if (!buf)
    {
        write(2, "Error:", ft_strlen("Error:"));
        write(2, strerror(errno), ft_strlen(strerror(errno)));
        write(2, "\n", 1);
        return ;
    }
    if ((pid = fork()) < 0)
        return ;
    if (pid == 0)
        ft_pwd_helper(buf, cur);
    else
        simple_pointer_free(buf);
}
