/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isescaped.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 16:22:52 by bkis              #+#    #+#             */
/*   Updated: 2017/07/05 16:22:53 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_isescaped(char c)
{
	if (c == '\a' || c == '\b' || c == '\f' || c == '\n' || c == '\r'
			|| c == '\t' || c == '\v')
		return (1);
	return (0);
}
