/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 15:06:38 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/13 07:58:54 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_string.h"


int main() 
{ 
    char str[50] = "Checking if bzero works."; 
    printf("\nBefore bzero(): %s\n", str); 
  
    // Fill 8 characters starting from str[5] with zero bytes 
 	ft_bzero(str + 5, 8); 
  
    printf("After bzero():  %s", str); 
    return 0; 
} 
