/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 21:49:11 by mamoussa          #+#    #+#             */
/*   Updated: 2019/08/27 20:23:35 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int v0, int v1, int v2)
{
	ft_putchar(v0);
	ft_putchar(v1);
	ft_putchar(v2);
	if (v0 < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int aray[3];

	*aray = '0';
	*(aray + 1) = '0';
	*(aray + 2) = '0';
	while (*aray <= '7')
	{
		while (*(aray + 1) <= '8')
		{
			while (*(aray + 2) <= '9')
			{
				if (*aray < *(aray + 1) && *(aray + 1) < *(aray + 2))
				{
					ft_print(*aray, *(aray + 1), *(aray + 2));
				}
				*(aray + 2) = *(aray + 2) + 1;
			}
			*(aray + 2) = '0';
			*(aray + 1) = *(aray + 1) + 1;
		}
		*(aray + 1) = '0';
		*aray = *aray + 1;
	}
}
