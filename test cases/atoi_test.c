/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 15:25:34 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/16 15:25:36 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Main Method */
int main(int argc, char **argv)
{
	printf("Conversion from atoi(): %d\n", atoi(argv[1]));
	printf("Conversion from ft_atoi(): %d\n", ft_atoi(argv[1]));
	return 0;
}
