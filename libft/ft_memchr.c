/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 12:12:05 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/20 12:34:40 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*#include <string.h>
#include <stdio.h>

int	main(void) {
   char s1[]="tala ";
   char *str =ft_memchr(s1, 'a',3);
   printf("%s",str);
char *str1 =memchr(s1, 'a',3);
printf("%s",str1);
    return (0);
}*/
