/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 22:49:58 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/14 22:50:00 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char buf[] = "computer program";
	char * ptr;
	int    ch = 'p';

	/* This illustrates strchr */
	ptr = ft_strchr( buf, ch );
	printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );

	/* This illustrates strrchr */
	ptr = ft_strrchr( buf, ch );
	printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
	return 0;
}
