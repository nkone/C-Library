/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:06:38 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/22 16:05:38 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char str1[] = "Duplicate";
	char str2[] = "Copy this sentence.";

	printf("String 1 is: %s\n", str1);
	printf("String 2 is: %s\n", str2);
	ft_strcpy(str2, str1);
	printf("After ft_strcpy(str2, str1), string 2 now is: %s\n", str2);
	//strcpy(str2, str1);
	//printf("After strcpy(str2, str1), string 2 now is: %s\n", str2);
	return 0;
	/*char str1[]="Hello Geeks!"; 
    char str2[] = "GeeksforGeeks"; 
    char str3[40]; 
    char str4[40]; 
    char str5[] = "GfG"; 
      
    ft_strcpy(str2, str1); 
    ft_strcpy(str3, "Copy successful"); 
    ft_strcpy(str4, str5); 
    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4: %s\n", str1, str2, str3, str4); 
    return 0;*/ 
}
