/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 13:42:21 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/13 13:42:26 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char str1[] = "This is greater";
	char str2[] = "Which is greater";

	int n;

	n = ft_memcmp(str1, str2, strlen(str1));

	if (n > 0) 
		printf("'%s' is greater than '%s'.\n",str1,str2);
	else if (n < 0) 
		printf("'%s' is less than '%s'.\n",str1,str2);
	else 
		printf("'%s' is the same as '%s'.\n",str1,str2);
	return 0;
}
