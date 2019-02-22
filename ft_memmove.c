/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 09:44:15 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/17 18:45:39 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap;
** the copy is always done in a non-destructive manner.
** Copies in a backward manner to prevent overlapping.
**
** RETURN VALUES
** The memmove() function returns the original value of dst.
**
** How is it different from memcpy()?
** memcpy() simply copies data one by one from one location to another.
** On the other hand memmove() copies the data first to an intermediate buffer,
** then from buffer to destination.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	if (dest < source)
		while (len--)
			*dest++ = *source++;
	else
		while (len)
		{
			dest[len - 1] = source[len - 1];
			len--;
		}
	return (dst);
}
