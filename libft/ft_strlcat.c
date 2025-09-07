/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:03:02 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/13 16:18:42 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	sum;

	i = 0;
	j = 0;
	l = 0;
	sum = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (size > i)
		sum = j + i;
	else
		sum = size + j;
	if (size > 0)
	{
		while (src[l] != '\0' && l < size - 1)
			dst[i++] = src[l++];
	}
	dst[i++] = '\0';
	return (sum);
}
/*#include <stdio.h>
int	main(void) {
    char s1[] = "nidall";
    char s2[] = "tala";
    
    printf("%ld\n", ft_strlcat(s1,s2 ,10 ));

    return (0);
}*/
