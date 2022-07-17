/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:19:14 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:00 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_line_skyscraper(int *line, int direction)
{
	int	count;
	int	index;

	count = 1;
	if (direction == 1)
	{
		index = 1;
		while (index < 4)
		{
			if (line[index] > line[index - 1])
				count++;
			index++;
		}
	}
	if (direction == 2)
	{
		index = 3;
		while (index > 1)
		{
			if (line[index - 1] > line[index])
				count++;
			index--;
		}
	}
	return (count);
}

int	count_column_skyscraper(int **board, int x_pos, int direction)
{
	int	count;
	int	index;

	count = 1;
	if (direction == 3)
	{
		index = 1;
		while (index < 4)
		{
			if (board[index][x_pos] > board[index - 1][x_pos])
				count++;
			index++;
		}
	}
	if (direction == 4)
	{
		index = 3;
		while (index > 0)
		{
			if (board[index - 1][x_pos] > board[index][x_pos])
				count++;
			index--;
		}
	}
	return (count);
}

char	*extract_constraint(char *argument, int start, int end)
{
	int		first_index;
	int		second_index;
	char	*constraints;

	first_index = 0;
	second_index = 0;
	constraints = (char *)malloc(sizeof(char));
	while (argument[first_index])
	{
		if ((first_index >= start) && (first_index <= end))
		{
			constraints[second_index] = argument[first_index];
			second_index++;
		}
		first_index++;
	}
	constraints[second_index] = '\0';
	return (constraints);
}

char	*split_argument(char *argument, int start, int end)
{
	char	*constraints;
	char	*constraints_array;
	int		first_index;
	int		second_index;

	constraints_array = "";
	constraints_array = (char *)malloc(sizeof(char) * 4);
	constraints = extract_constraint(argument, start, end);
	first_index = 0;
	second_index = 0;
	while (constraints[first_index])
	{
		if (constraints[first_index] >= '1' && constraints[first_index] <= '4')
		{
			constraints_array[second_index] = constraints[first_index];
			second_index++;
		}
		first_index++;
	}
	return (constraints_array);
}
