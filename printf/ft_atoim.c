/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <mamoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:15:50 by mamoussa          #+#    #+#             */
/*   Updated: 2019/11/12 20:51:56 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoim(const char *str)
{
	int				i;
	long			result;
	short			s;

	i = 0;
	result = 0;
	s = 1;
	while (str[i] == '-')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		if (result > 2147483648 && s == -1)
			return (0);
		if (result > 2147483647 && s == 1)
			return (-1);
		i++;
	}
	return (result * s);
}
