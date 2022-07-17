/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:21:31 by twang             #+#    #+#             */
/*   Updated: 2022/07/17 20:22:28 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	*a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *base)
{
	int index;

	index = 0;
	while (base[index])
		i++;
	return(index);
}

int	check_base_validity(char *base)
{
	int	base_size;
	int index;
	int index_comp; 

	index = 0;
	base_size = ft_strlen(str);
	if (base_size < 2)
		return(0);
	while (base[index])
	{
		if (base[index] == 43 || base[index] == 45)
			return(0);
		index_comp = 0;
		while (base[index_comp])
		{
			if (base[index] == base[index_comp]
				return(0);
			index_comp++;
		}
		index++;
	}
	return(1);

}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr >= 0 && nbr <= 10)
		ft_putchar(nbr + '0');
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(nbr *(-1));
	}
	else 
	{
		ft_putnbr_base(nbr / 10);
		ft_putnbr_base(nbr % 10);
	}
}

int main (void)
{
	char	base[] = "0123456789ABCDEF";
	int		nbr = "12345";

	ft_putnbr_base(nbr, base);
	return(0);
}
