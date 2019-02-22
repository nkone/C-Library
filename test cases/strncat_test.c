/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 13:13:52 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/14 13:13:55 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char src[12] = "AB";
	char dest[11] = "CDFGHI";
	size_t len = 33;

	ft_strncat(dest, src, 3);
	printf("Source string: %s\n", src);
	printf("Destination string: %s", dest);
	return 0;
}
