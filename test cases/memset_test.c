/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:06:38 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/14 10:25:35 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main() 
{ 
    char str[50] = "Fill part of this sentence with underscore";
    printf("\nBefore memset(): %s\n", str); 
  
   ft_memset(str + 13, '_', 13);
  
    printf("After memset():  %s", str); 
    return 0; 
} 
