/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 13:59:50 by bkis              #+#    #+#             */
/*   Updated: 2017/07/07 13:59:51 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
