/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/25 13:27:21 by mamoussa          #+#    #+#             */
/*   Updated: 2019/08/28 18:05:05 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int n1)
{
	if (n1 < 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int n1;
	int n2;
	int result;

	n1 = 0;
	n2 = 0;
	result = 0;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			if (n2 > n1)
			{
				ft_putchar((n1 / 10) + '0');
				ft_putchar((n1 % 10) + '0');
				ft_putchar(' ');
				ft_putchar((n2 / 10) + '0');
				ft_putchar((n2 % 10) + '0');
				ft_print(n1);
			}
			n2++;
		}
		n2 = 0;
		n1++;
	}
}
