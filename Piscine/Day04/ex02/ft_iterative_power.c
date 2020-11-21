/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 19:16:42 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/03 18:59:06 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 0;
	result = 1;
	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
