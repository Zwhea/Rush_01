/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_solvable.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:16:13 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:08:15 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_SOLVABLE_H
# define IS_SOLVABLE_H

int	check_is_solvable(char *argument);
int	check_unsolvable_line(char *left, char *right);
int	check_unsolvable_column(char *up, char *down);
int	check_unsolvable_corners(char *arr1, char *arr2, char *arr3, char *arr4);

#endif
