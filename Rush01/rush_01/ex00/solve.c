/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:02:08 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:28 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int	check_line_presence(int value, int *line)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (line[index] == value)
			return (0);
		index++;
	}
	return (1);
}

int	check_column_presence(int value, int x_position, int **board)
{
	int	index;

	index = 0;
	while (board[index])
	{
		if (board[index][x_position] == value)
			return (0);
		index++;
	}
	return (1);
}

int	check_constraint_line(int *line, int direction, int view)
{	
	if (view == count_line_skyscraper(line, direction))
		return (1);
	return (0);
}

int	check_constraint_column(int **board, int x_pos, int direction, int view)
{
	if (view == count_column_skyscraper(board, x_pos, direction))
		return (1);
	return (0);
}
