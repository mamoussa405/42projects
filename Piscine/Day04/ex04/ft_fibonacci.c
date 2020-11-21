/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 22:20:38 by mamoussa          #+#    #+#             */
/*   Updated: 2019/09/03 19:35:04 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int result;

	result = 0;
	if (index < 0)
		result = -1;
	else if (index == 0)
		result = 0;
	else if (index == 1)
		result = 1;
	else
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}
