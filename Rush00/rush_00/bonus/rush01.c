/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:54:33 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/09 20:17:04 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_top(int x)
{
	int	a;

	a = 1;
	ft_putchar('/');
	while (a < x - 1)
	{
		ft_putchar('*');
		a++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	int	a;

	a = 1;
	ft_putchar('*');
	while (a < x - 1)
	{
		ft_putchar(' ');
		a++;
	}
	if (x > 1)
		ft_putchar('*');
	ft_putchar('\n');
}

void	ft_bot(int x)
{
	int	a;

	a = 1;
	ft_putchar('\\');
	while (a < x - 1)
	{
		ft_putchar('*');
		a++;
	}
	if (x > 1)
		ft_putchar('/');
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
			ft_bot(x);
	}
}	
