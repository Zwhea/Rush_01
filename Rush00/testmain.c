/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:57:44 by twang             #+#    #+#             */
/*   Updated: 2022/07/09 16:35:56 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_top(int x)
{
	int a;

	a = 0;
	while(a < x)
	{
		if((a == 0) || (a == x - 1))	
			ft_putchar('o');
		else
			ft_putchar('-');
		a++;
	}
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	int a;

	a = 0;
	while(a < x)
	{
		if((a == 0) || (a == x - 1))	
			ft_putchar('|');
		else
			ft_putchar(' ');
		a++;
	}
	ft_putchar('\n');
}
void	ft_bot(int x)
{
	int a;

	a = 0;
	while(a < x)
	{
		if((a == 0) || (a == x - 1))	
			ft_putchar('o');
		else
			ft_putchar('-');
		a++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int b;

	b = 1;

	if(x > 0 && y > 0)
	{	
		ft_top(x);
		while(b < y - 1)
		{
			ft_middle(x);
			b++;
		}
		if (b !=  1 || b == y - 1)
			ft_bot(x);
	}
}

int	main(void)
{
	rush(1, 4);
	return(0);
}
