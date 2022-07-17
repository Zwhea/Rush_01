/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:55:06 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:35 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_H
# define SOLVE_H

int	check_line_presence(int value, int *line);
int	check_column_presence(int value, int x_position, int **board);
int	check_constraint_line(int *line, int direction, int view);
int	check_constraint_column(int **board, int x_pos, int direction, int view);

#endif
