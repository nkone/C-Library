/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtok_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:55:51 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/22 13:55:54 by phtruong         ###   ########.fr       */
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
