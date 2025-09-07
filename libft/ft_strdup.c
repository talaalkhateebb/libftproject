/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 14:29:05 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/21 14:29:30 by talkhati         ###   ########.fr       */
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

size_t	ft_strlen(const char *s)
{
	int		i;
	int		sum;
	char	c;

	i = 0;
	sum = 0;
	c = s[0];
	while (c != '\0')
	{
		sum++;
		c = s[++i];
	}
	return (sum);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*d;

	len = ft_strlen(s) + 1;
	d = (char *)malloc(len);
	ft_memcpy(d, s, len);
	return (d);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
char s[]="tala";
printf("%s\n",  ft_strdup(s));
printf("%s\n",  strdup(s));
return (0);
}*/
