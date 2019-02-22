/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phtruong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 09:57:51 by phtruong          #+#    #+#             */
/*   Updated: 2019/02/21 20:22:05 by phtruong         ###   ########.fr       */
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
** use this to count length of array.
** int count = 0;
**char *ptr = s;
**while((ptr = strchr(ptr, ' ')) != NULL) {
**count++;
**ptr++;
**}
*/
#include "libft.h"
