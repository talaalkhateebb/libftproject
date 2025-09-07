/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:51:03 by talkhati          #+#    #+#             */
/*   Updated: 2025/09/03 15:51:57 by talkhati         ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	j = 0;
	newstr = malloc(strlen(s1) + 1);
	while (s1[i] != '\0')
	{
		if (s1[i] != *set)
		{
			newstr[j] = s1[i];
			j++;
		}
		i++;
	}
	newstr[j] = '\0';
	return (newstr);
}
/*int	main(void)
{
	char	t[]="l";

	printf("%s", ft_strtrim("hello world", t));
	return (0);
}*/
