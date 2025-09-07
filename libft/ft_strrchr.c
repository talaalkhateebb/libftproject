/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 16:30:37 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/19 16:37:01 by talkhati         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void) {

      printf("%s\n", ft_strrchr("talall", 'a'));
printf("%s\n", strrchr("talall", 'a'));
    return (0);
    }*/
