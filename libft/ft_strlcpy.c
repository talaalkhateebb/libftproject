/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:52:48 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/13 15:56:06 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[j] != '\0')
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (i);
}
/*#include <stdio.h>
#include <bsd/string.h>
#include <string.h>

int	main(void) {
   char src[]= "tala";
    char dst[]= "husam";
  
    ft_strlcpy(dst,src, 10);
    printf("%s\n", dst);
    strlcpy(dst,src, 10);
    printf("%s\n", dst);
    return (0);
}*/
