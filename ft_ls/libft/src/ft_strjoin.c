/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkis <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 12:56:49 by bkis              #+#    #+#             */
/*   Updated: 2017/03/11 12:56:50 by bkis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ret;

	ret = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (ret)
	{
		ft_strcpy(ret, s1);
		ft_strcat((ret + ft_strlen(s1)), s2);
	}
	return (ret);
}
