/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 22:06:18 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/09 22:06:24 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrev(char *str)
{
	int compteur;
	int size;
	int swap;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	compteur = 0;
	while (size > compteur)
	{
		swap = str[size - 1];
		str[size - 1] = str[compteur];
		str[compteur] = swap;
		size--;
		compteur++;
	}
	return (str);
}
