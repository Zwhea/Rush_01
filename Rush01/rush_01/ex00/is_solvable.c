/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solvable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:20:06 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:11 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"
#include "cases.h"
#include "is_solvable.h"
#include "error.h"

int	check_unsolvable_line(char *left, char *right)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (!check_line_right_cases(left[index], right[index]))
			return (0);
		index++;
	}
	return (1);
}

int	check_unsolvable_column(char *up, char *down)
{
	int	index;

	index = 0;
	while (index < 4)
	{
		if (!check_column_right_cases(up[index], down[index]))
			return (0);
		index++;
	}
	return (1);
}

int	check_unsolvable_corners(char *arr1, char *arr2, char *arr3, char *arr4)
{
	if (arr1[0] == '1' && arr3[0] == '4')
		return (0);
	if (arr1[0] == '4' && arr3[0] == '1')
		return (0);
	if (arr1[0] == '1' && arr4[0] == '4')
		return (0);
	if (arr1[0] == '4' && arr4[0] == '1')
		return (0);
	if (arr2[0] == '4' && arr3[0] == '1')
		return (0);
	if (arr2[0] == '1' && arr3[0] == '4')
		return (0);
	if (arr2[0] == '4' && arr4[0] == '1')
		return (0);
	if (arr2[0] == '1' && arr4[0] == '1')
		return (0);
	return (1);
}

int	check_is_solvable(char *argument)
{
	char	*col_up;
	char	*col_down;
	char	*line_left;
	char	*line_right;

	col_up = split_argument(argument, 0, 6);
	col_down = split_argument(argument, 8, 14);
	line_left = split_argument(argument, 16, 22);
	line_right = split_argument(argument, 24, 30);
	if (!check_unsolvable_line(line_left, line_right))
		return (0);
	if (!check_unsolvable_column(col_up, col_down))
		return (0);
	if (!check_unsolvable_corners(col_up, col_down, line_left, line_right))
		return (0);
	return (1);
}
