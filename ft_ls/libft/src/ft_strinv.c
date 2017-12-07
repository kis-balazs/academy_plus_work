/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:56:24 by bkis              #+#    #+#             */
/*   Updated: 2017/03/11 12:56:24 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinv(char *s)
{
	char	*tmp;
	int		i;
	int		c;

	i = ft_strlen(s) - 1;
	c = 0;
	tmp = ft_strdup(s);
	while (i + 1)
	{
		s[c] = tmp[i];
		i--;
		c++;
	}
	ft_strdel(&tmp);
	return (s);
}