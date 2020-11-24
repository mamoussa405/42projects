/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 20:12:47 by mbani             #+#    #+#             */
/*   Updated: 2020/11/24 12:19:11 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

t_env	*ft_lstnewenv(char *key, char *value)
{
	t_env *ptr;

	ptr = malloc(sizeof(t_env));
	if (!ptr)
		return (NULL);
	ptr->key = key;
	ptr->value = value;
	ptr->next = NULL;
	return (ptr);
}

void	ft_lstadd_backenv(t_env **alst, t_env *new)
{
	t_env *p;

	p = *alst;
	if (*alst == NULL)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		while (p->next)
			p = p->next;
		p->next = new;
		new->next = NULL;
	}
}
void	ft_lstclearenv(t_env **lst)
{
	t_env *tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->key);
		(*lst)->key = NULL;
		free((*lst)->value);
		(*lst)->value = NULL;
		free(*lst);
		*lst = NULL;
		*lst = tmp;
	}
}
void	ft_lstclearcmd(t_cmd **lst)
{
	t_cmd *tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free((*lst)->string);
		(*lst)->string = NULL;
		free(*lst);
		*lst = NULL;
		*lst = tmp;
	}
}
t_cmd	*ft_lstnew_cmd(char *string, enum e_type t)
{
	t_cmd *ptr;

	ptr = malloc(sizeof(t_cmd));
	if (!ptr)
		return (NULL);
	ptr->string = ft_strdup(string);
	ptr->type = t;
	ptr->next = NULL;
	return (ptr);
}
void	ft_lstadd_backcmd(t_cmd **alst, t_cmd *new)
{
	t_cmd *p;

	p = *alst;
	if (*alst == NULL)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		while (p->next)
			p = p->next;
		p->next = new;
		new->next = NULL;
	}
}
