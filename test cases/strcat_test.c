/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:32:00 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/14 11:32:03 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main ()
{
	char str1[50] = "Source";
	char str2[50] = "Destination";
	size_t len = 33;

	printf("%s", ft_strcat(str2, str1));
	//printf("%s", strcat(str2, str1));
	return 0;
}
