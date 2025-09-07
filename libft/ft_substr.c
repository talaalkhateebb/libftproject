/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 18:41:10 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/21 18:43:01 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(s);
	s2 = (char *)malloc(sizeof(char) * (start - len) + 1);
	if (!s || !s2)
		return (NULL);
	if (start >= slen)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*int	main(void)
{
	char	*result;

	result = ft_substr("Hello World", 6, 5);
	printf("%s\n", result);
	return (0);
}*/
