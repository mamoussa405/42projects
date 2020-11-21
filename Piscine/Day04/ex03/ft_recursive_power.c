/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:16:24 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/03 18:58:44 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;
	int i;

	result = 1;
	i = 0;
	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else if (power >= 1)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}
