/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:57:32 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/20 09:57:35 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Main Method */
int main()
{
	char *s1 = " \n\t";
	char *s2 = "";
	char *ret = ft_strtrim(s1);
	printf("String trim: %s\n", ft_strtrim(s1));
	printf("Value for strcmp(ret, s2): %d\n", strcmp(ret, s2));
	return 0;
}
