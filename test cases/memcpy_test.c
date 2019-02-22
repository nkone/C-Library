/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 19:39:10 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/17 19:00:06 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main () 
{ 
  char str1[7] = "HELLOO";  
  char str2[] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";
  
  puts("str1 before memcpy "); 
  puts(str1); 
  
  /* Copies contents of str2 to sr1 */
  memcpy(str1, str2, strlen(str2)+1); 
  
  puts("\nstr1 after memcpy "); 
  puts(str1); 
  
  return 0; 
} 
