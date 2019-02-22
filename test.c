/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 20:28:39 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/21 21:04:58 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Main Method */
int main()
{
	char str[] ="- This, a sample string.";
	char * pch;
	printf ("Splitting string \"%s\" into tokens:\n",str);
	pch = ft_strtok (str," ,.-");
	while (pch != NULL)
	{
		printf ("%s\n",pch);
		pch = ft_strtok (NULL, " ,.-");
	}
	return 0;
}
