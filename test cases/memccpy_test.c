/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:25:16 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/13 12:25:19 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char string1[60] = "Battlecruiser operational";

int main () {

   char buffer[61];
   char *pdest;
   printf( "Function: memccpy 42 characters or to character 'c'\n" );
   printf( "Source: %s\n", string1 );
   pdest = ft_memccpy( buffer, string1, 'c', 42);
   *pdest = '\0';
   printf( "Result: %s\n", buffer );
   printf( "Length: %lu characters\n", strlen( buffer ) );
   return 0;
}
