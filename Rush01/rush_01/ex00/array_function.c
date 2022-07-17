/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:29:48 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:07:31 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	**fill_board(int **board)
{
	int	column;
	int	line;

	line = 0;
	while (line < 4)
	{
		column = 0;
		while (column < 4)
		{
			board[line][column] = 0;
			column++;
		}
		line++;
	}
	return (board);
}

int	**generate_skyscraper_board(void)
{
	int	**board;
	int	line;

	line = 0;
	board = (int **)malloc(4 * sizeof(int *));
	while (line < 4)
	{
		board[line] = (int *)malloc(4 * sizeof(int));
		line++;
	}
	board = fill_board(board);
	return (board);
}

void	display_skyscraper_board(int **board)
{
	int		line;
	int		column;
	char	temp;

	line = 0;
	while (line < 4)
	{
		column = 0;
		while (column < 4)
		{
			temp = board[line][column] + 48;
			if (column == 3)
			{
				write(1, &temp, 1);
			}
			else
			{
				write(1, &temp, 1);
				write(1, " ", 1);
			}
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}
