/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achu <achu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:37:52 by achu              #+#    #+#             */
/*   Updated: 2025/03/15 16:43:01 by achu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_digit(int c)
{
	return ('0' <= c && c <= '9');
}
