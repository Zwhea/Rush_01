/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:08:24 by twang             #+#    #+#             */
/*   Updated: 2022/07/15 10:01:54 by twang            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char a)
{
	if (a == '\t' || a == '\n' || a == '\v' || a == '\f'
		|| a == '\r' || a == ' ')
		return (1);
	return (0);
}

int	ft_isnum(char b)
{
	if (b >= '0' && b <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] && ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] && ft_isnum(str[i]) == 1)
	{
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (sign * res);
}

int	main(void)
{
	char	str[] = " --+--+1234ab567";

	printf("%d", ft_atoi(str));
	return (0);
}
