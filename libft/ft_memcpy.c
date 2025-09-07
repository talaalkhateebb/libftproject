/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:18:31 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/13 15:26:54 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	int					j;
	int					i;

	d = dst;
	s = src;
	i = 0;
	j = 0;
	while (n > 0)
	{
		d[i] = s[j];
		i++;
		j++;
		n--;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
    char src[]= "tala";
    char dst[]= "husam";
    char *g;
    char *i;
    g=src;
    i=dst;
    printf("%s\n",  ft_memcpy(dst,src, 2));
    return (0);
}*/
