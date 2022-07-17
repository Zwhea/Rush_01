/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:13:29 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:07:24 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_argument_count(int argc)
{
	if (argc != 2)
		return (0);
	else
		return (1);
}

int	check_argument_length(char *argument)
{
	int	i;

	i = 0;
	while (argument[i])
		i++;
	return (i);
}

int	check_argument_format(char *argument)
{
	int	i;

	i = 0;
	while (argument[i])
	{
		if ((i % 2 == 0) && !(argument[i] >= '1' && argument[i] <= '4'))
			return (0);
		if ((i % 2 == 1) && !(argument[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	check_argument_validity(char *argument)
{
	if (check_argument_length(argument) != 31)
		return (0);
	if (!check_argument_format(argument))
		return (0);
	return (1);
}
