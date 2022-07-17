/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:14:58 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:05 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

int		count_line_skyscraper(int *line, int direction);
int		count_column_skyscraper(int **board, int x_pos, int direction);
char	*extract_constraint(char *argument, int start, int end);
char	*split_argument(char *argument, int start, int end);

#endif
