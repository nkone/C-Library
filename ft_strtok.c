/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 14:15:33 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/21 21:05:28 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** Isolate sequential tokens in a null-terminated string, str.
** These tokens are separeted in the string by at least one of the character
** in sep. The first time that strtok() is called, str should be specified;
** subsequent calls, wishing to obtain more tokens from the same string,
** should pass a null pointer instead. The separator string, sep, must be
** supplied each time, and may change between calls.
*/

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*p;

	p = 0;
	if (str)
		p = str;
	else if (!p)
		return (0);
	str = p + ft_strspn(p, delim);
	p = str + ft_strcspn(str, delim);
	if (p == str)
		return (p = 0);
	p = *p ? *p = 0, p + 1 : 0;
	return (str);
}
