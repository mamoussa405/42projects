/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:15:50 by mamoussa          #+#    #+#             */
/*   Updated: 2019/12/30 22:09:12 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoim(char **str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (*str[i] == ' ')
		str[i] += 1;
	while (*str[i] >= '0' && *str[i] <= '9')
	{
		result = result * 10 + (*str[i] - 48);
		str[i] += 1;
	}
	return (result);
}
