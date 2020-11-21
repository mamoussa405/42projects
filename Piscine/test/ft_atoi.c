/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 13:48:40 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/05 18:13:18 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"

int		ft_atoi(char *str)
{
	int i;
	int result;
	int s;

	i = 0;
	result = 0;
	s = 1;
	while (str[i] == ' ')
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			s = s * -1;
		}
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * s);
}
