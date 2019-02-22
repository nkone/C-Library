/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:32:10 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/14 21:32:12 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main ()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = 1000; 
	//__builtin___strlcat_chk (buff1, str, max, __builtin_object_size (buff1, 2 > 1 ? 1 : 0));
	printf("Length of str is: %lu\n", strlen(str));
	strlcat(buff1, str,max);
	//printf("%zu\n", strlcat(buff1,str,max));
	printf("%s", buff1);
	/*char *str = "Where is the pointer?";
	char *pstr;
	unsigned int n = strlen(str);
	int i;

	pstr = str;
	printf("str has length of: %d\n", n);
	while (n--)
		pstr++;
	i = pstr - str;
	printf("pstr - str has value of: %d", i);*/
	return (0);
}
