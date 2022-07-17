/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:33:18 by qchavet           #+#    #+#             */
/*   Updated: 2022/07/17 17:07:39 by qchavet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_line_right_cases(char left, char right)
{
	if (left == '4' && right == '1')
		return (1);
	if (left == '1' && right == '4')
		return (1);
	if (left == '3' && right == '1')
		return (1);
	if (left == '1' && right == '3')
		return (1);
	if (left == '2' && right == '1')
		return (1);
	if (left == '1' && right == '2')
		return (1);
	if (left == '3' && right == '2')
		return (1);
	if (left == '2' && right == '3')
		return (1);
	if (left == '2' && right == '2')
		return (1);
	return (0);
}

int	check_column_right_cases(char up, char down)
{
	if (up == '4' && down == '1')
		return (1);
	if (up == '1' && down == '4')
		return (1);
	if (up == '3' && down == '1')
		return (1);
	if (up == '1' && down == '3')
		return (1);
	if (up == '2' && down == '1')
		return (1);
	if (up == '1' && down == '2')
		return (1);
	if (up == '3' && down == '2')
		return (1);
	if (up == '2' && down == '3')
		return (1);
	if (up == '2' && down == '2')
		return (1);
	return (0);
}
