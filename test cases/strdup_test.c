/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:55:42 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/13 14:55:44 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char *str1 = "Duplicate this sentence.";
	const char *str2;

	str2 = ft_strdup(str1);
	printf("String 1 is: %s\n", str1);
	printf("After ft_strdup(str1), string 2 now is: %s\n", str2);
	return 0;
}
