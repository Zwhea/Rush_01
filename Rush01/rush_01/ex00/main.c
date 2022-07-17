/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:03:11 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:20 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "arguments.h"
#include "error.h"
#include "array_function.h"
#include "solve.h"
#include "is_solvable.h"

int	main(int argc, char **argv)
{
	int	**board;

	if (check_argument_count(argc) && check_argument_validity(argv[1]))
	{	
		board = generate_skyscraper_board();
		display_skyscraper_board(board);
	}
	if (!check_argument_count(argc)
		|| !check_argument_validity(argv[1])
		|| !check_is_solvable(argv[1]))
	{
		display_error_message("Error\n");
	}
	return (0);
}
