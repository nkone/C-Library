/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:28:39 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/23 21:16:52 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Main Method */

int main()
{
	char *s = "      split       this for   me  !       ";
	char	**result = ft_strsplit(s, ' ');
	char	*expected[] = {"split", "this", "for", "me", "!"};


	printf("Result[0]: |%s| Expected[0] |%s|\n", result[5], expected[5]);
	printf("strcmp(*result, *expected): %d\n", strcmp(result[0], expected[0]));
	printf("strcmp(*result, *expected): %d\n", strcmp(result[1], expected[1]));
	printf("strcmp(*result, *expected): %d\n", strcmp(result[2], expected[2]));
	printf("strcmp(*result, *expected): %d\n", strcmp(result[4], expected[4]));
	while (1){}
	return 0;
}
