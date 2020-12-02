/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:49:37 by mamoussa          #+#    #+#             */
/*   Updated: 2020/12/02 11:15:15 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

size_t    search_for_key(char *key, char *value)
{
    t_env   *current;

    current = g_env_head;
    while (current)
    {
        if (!ft_strncmp(current->key, key, ft_strlen(current->key)))
        {
           g_tmp = current->value;
           current->value = ft_strdup(value);
           simple_pointer_free(g_tmp);
           return (1);
        }
        current = current->next;
    }
    return (0);
}

void    ft_export_helper(char  *ptr)
{
    char    *key;
    char    *value;
    char    *tmp;
    t_env   *new_node;
    t_env   *current;

    tmp = ptr+1;
    current = g_env_head;
    *ptr = '\0';
    key = ft_strdup(g_cmd_head->string);
    value = ft_strdup(tmp);
    if (search_for_key(key, value))
    {
        simple_pointer_free(key);
        simple_pointer_free(value);
        *ptr = '=';
        return ;
    }
    new_node = ft_lstnewenv(key, value);
    ft_lstadd_backenv(&current, new_node);
    *ptr = '=';
}
char    *equ_search(char *str, char c)
{
    while (*str) 
    {
        if (*str == c)
            return (str);
        str++;
    }
    return (NULL);
}

size_t    error_cheker(void)
{
    t_cmd   *current;   
    char    *ptr_equ;

    ptr_equ = NULL;
    current = g_cmd_head;
    current = current->next;
    while (current)
    {
        if (current->type == pipee)
            return (1);
        if ((ptr_equ = equ_search(current->string, '=')) && (ptr_equ == current->string)) 
        {
            if (*(ptr_equ + 1) == '\0')
               ft_error("bad assignment\n");
            else
            {
                ft_error(current->string);
                write(2 ," not found\n", ft_strlen(" not found\n"));
            }
            return (1);
        }
        current = current->next;
    }
    return (0);
}

void	ft_export(t_pipe *cur)
{
    char    *ptr_to_equ;

    ptr_to_equ = NULL;
    if (ft_strncmp("export", g_cmd_head->string, ft_strlen(g_cmd_head->string)))
    {
        ft_error(g_cmd_head->string);
        write(2, ": command not found\n", ft_strlen(": command not found\n"));
        return ;
    }
    g_cmd_head = g_cmd_head->next;
    if (!g_cmd_head || (g_cmd_head->type == semicolumn) || (g_cmd_head->type == pipee))
    {
        print_in_sort(cur);
        return ;
    }
    if (error_cheker())
        return ;
    while (g_cmd_head && (g_cmd_head->type != semicolumn) && (g_cmd_head->type != pipee))
    {
        if ((ptr_to_equ = ft_strchr(g_cmd_head->string, '=')))
            ft_export_helper(ptr_to_equ);
        g_cmd_head = g_cmd_head->next;
    }
}
