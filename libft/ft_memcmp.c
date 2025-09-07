/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:47:00 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/20 13:48:08 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*s11;
	const unsigned char	*s22;

	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	i = 0;
	while (s11[i] != '\0' && s22[i] != '\0' && i < n)
	{
		if ((s11[i] != s22[i]))
			return (s11[i] - s22[i]);
		i++;
	}
	return (s11[i] - s22[i]);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void) {
   char s1[]="HEllo";
   char s2[]="Hello";
   printf("%d",memcmp(s1,s2,2));
   printf("%d",ft_memcmp(s1, s2,2));

    return (0);
}*/
