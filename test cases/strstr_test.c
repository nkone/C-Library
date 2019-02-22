/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:43:48 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/15 15:43:51 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Main Method */
int main()
{
	char s1 [] = "I'm trying to find a string.";
	char *s2 = "find";
	printf("Locate '%s', in string '%s'\n", s2, s1);
    printf("Returned String: %s\n", ft_strstr(s1, "find"));

	return 0;
}
