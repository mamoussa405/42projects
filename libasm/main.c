 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 22:23:47 by mamoussa          #+#    #+#             */
/*   Updated: 2020/02/25 17:41:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, char *src);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_write(int fildes, const void *buf, size_t nbyte);
size_t	ft_read(int fildes, void *buf, size_t nbyte);
char 	*ft_strdup(const char *s1);
int ft_malloc(char *str);
int		main(void)
{
	char	s[20];
	char	*s1;
	char	buffer[100];

	s1 = "string";
	// printf("%d\n", ft_strlen("string"));
	// printf("%s\n", ft_strcpy(s, "string"));
	// printf("%d\n", ft_strcmp("string", "string"));
	// printf("%zu\n", ft_write(1, s1, ft_strlen(s1)));
	// printf("%zu\n", ft_read(0, buffer, 10));
	printf("%p\n", ft_strdup("string"));
	//printf("%d\n", ft_malloc("string"));
	return (0);
}
