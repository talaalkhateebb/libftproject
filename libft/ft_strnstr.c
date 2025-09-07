/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 14:16:32 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/20 14:17:18 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j] && s2[j] != '\0' && i < n)
		{
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)&s1[i]);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*

#include <bsd/string.h> int main(void) {
#include <stdio.h>
#include <unistd.h>

   char s1[]="talaHello";
   char s2[]="Hello";
   printf("%s",strnstr(s1,s2,10));
   //printf("%s",ft_strnstr(s1, s2,10));

    return (0);
}*/
