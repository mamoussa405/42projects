/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 10:44:57 by mamoussa          #+#    #+#             */
/*   Updated: 2019/08/25 16:12:19 by mamoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_firstline(int largeur, int x)
{
	while (largeur < x)
	{
		ft_putchar('A');
		largeur++;
		while (largeur <= x - 2)
		{
			ft_putchar('B');
			largeur++;
		}
		if (x > 1)
			ft_putchar('C');
		largeur++;
	}
	ft_putchar('\n');
}

void	ft_body(int largeur, int hauteur, int x, int y)
{
	if (y > 1)
	{
		while (hauteur < y - 2)
		{
			largeur = 0;
			while (largeur < x)
			{
				if (y > 2 && x > 2)
					ft_putchar('B');
				largeur++;
				while (largeur <= x - 2)
				{
					ft_putchar(' ');
					largeur++;
				}
				if (y > 2)
					ft_putchar('B');
				ft_putchar('\n');
				largeur++;
			}
			hauteur++;
		}
	}
}

void	ft_lastline(int largeur, int x, int y)
{
	if (y > 1)
	{
		while (largeur < x)
		{
			ft_putchar('A');
			largeur++;
			while (largeur <= x - 2)
			{
				ft_putchar('B');
				largeur++;
			}
			if (x > 1)
			{
				ft_putchar('C');
			}
			ft_putchar('\n');
			largeur++;
		}
	}
}

void	rush(int x, int y)
{
	int largeur;
	int hauteur;

	largeur = 0;
	hauteur = 0;
	ft_firstline(largeur, x);
	ft_body(largeur, hauteur, x, y);
	ft_lastline(largeur, x, y);
}
