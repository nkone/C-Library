/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 21:17:28 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/15 21:17:31 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Main Method */
int main()
{
	char *s1 = "abcdefghi";
	char *s2 = "abcdefg";

	int n;
	int m;
	m = strncmp(s1, s2, 8);
	n = ft_strncmp(s1, s2, 8);
	printf("Difference between s1 and s2 using ft_strncmp | %d |\n", n);
	printf("Difference between s1 and s2 using strncmp | %d |\n", m);
	return 0;
}
