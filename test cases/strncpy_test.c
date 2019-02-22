/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:21:23 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/14 09:21:25 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char str1[] = "Dup";
	char *str2;
	size_t len = 33;

	printf("%s", ft_strncpy(str2, str1, len));
	printf("%s", strncpy(str2, str1, len));
	return 0;
}
