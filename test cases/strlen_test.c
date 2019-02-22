/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:07:08 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/13 14:07:12 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char str1[] = "This is greater";
	size_t n = ft_strlen(str1);
	size_t m = strlen(str1);
	printf("String has a length of %zu (using ft_strlen)\n", n);
	printf("String has a length of %zu (using strlen)\n", m);
	return 0;
}
