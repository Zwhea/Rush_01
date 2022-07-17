/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:06:28 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:07:28 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENTS_H
# define ARGUMENTS_H

int	check_argument_count(int argc);
int	check_argument_length(char *argument);
int	check_argument_format(char *argument);
int	check_argument_validity(char *argument);

#endif
