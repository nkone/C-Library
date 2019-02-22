/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:24:51 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/13 12:25:00 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
  char * pch;
  char str[] = "Example string";
  pch = (char*) ft_memchr (str, 'g', strlen(str));
  if (pch!=NULL)
    printf ("'p' found at position %ld.\n", pch-str+1);
  else
    printf ("'p' not found.\n");
  return 0;
}
