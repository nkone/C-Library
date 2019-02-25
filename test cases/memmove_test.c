/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:29:24 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/18 21:23:41 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main () 
{
	char str1[] = "Geeks";   
  	char str2[]  = "Quiz";
	char str3[10] = "Overlap";
	char str4[10] = "Overlap";

  	puts("str1 before memmove "); 
  	puts(str1); 
  	ft_memmove(str1, str2, strlen(str2)); 
  	puts("\nstr1 after memmove ");
  	puts(str1);
  	puts("\nmemcpy() simply copies data one by one from one location to another.");
	puts("\nBefore memcpy:");
	puts(str3);
	ft_memcpy(str3+2, str3, strlen(str3));
	puts("\nAfter memcpy: with ft_memcpy(str3+2, str3, strlen(str3))");
	printf("%s\n", str3);
	puts("\nOn the other hand, memmove() copies to buffer, then buffer to destination.");
	ft_memmove(str4+2, str4, strlen(str4));
	puts("\nAfter memmove:");
	printf("%s\n", str4);

  	return 0; 
} 
