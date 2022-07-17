/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balfani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:57:25 by balfani           #+#    #+#             */
/*   Updated: 2022/07/10 09:36:28 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_top(int x)
{
	int	a;

	a = 1;
	ft_putchar('A');
	while (a < x - 1)
	{
		ft_putchar('B');
		a++;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	ft_middle(int x)

{
	int	a;

	a = 1;
	ft_putchar('B');
	while (a < x - 1)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	b;

	b = 1;
	if (x > 0 && y > 0)
	{
		ft_top(x);
		while (b < y - 1)
		{
			ft_middle(x);
			b++;
		}
		if (y > 1)
			ft_top(x);
	}
}
