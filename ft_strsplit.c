/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:57:51 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/22 20:17:26 by phtruong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** Allocates with malloc() and returns an array of "fresh" strings
** (all ending with '\0', including the array itself) obtained by splitting
** s using the character c as a delimiter. If the allocation fails,
** the function returns NULL. Example:
** ft_strplit("*hello*fellow***students*", '*') returns 
** ["hello", "fellow", "students"]
** RETURN VALUES
** Array of "fresh" strings result from the split.
*/

/*
**
*/

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**s_array;
	char	*pc;
	char	*s_copy;
	char	*ps_copy;
	int		w_count;
	int		x;
	int		w_len;

	x = 0;
	w_len = 0;
	pc = &c;
	s_copy = ft_strdup(s);
	ps_copy = ft_strdup(s_copy);
	w_count = ft_strtok_ntokens(s, pc);
	//printf("w_count value: %d\n", w_count);
	s_array = (char **)ft_memalloc(w_count * sizeof(char *));
	while (x < w_count)
	{
		w_len = (int)ft_strlen(ft_strtok_r(ps_copy, pc, &ps_copy));
		printf("w_len value: %d\n", w_len);
		s_array[x] = ft_strnew(w_len);
		s_array[x] = ft_strtok_r((char*)s_copy, pc, (char **)&s_copy);
		printf("s_array[x]: %d, %s", x, s_array[x]);
		x++;
	}
	return (s_array);
}
