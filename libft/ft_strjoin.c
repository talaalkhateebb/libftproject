/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 15:28:30 by talkhati          #+#    #+#             */
/*   Updated: 2025/09/03 15:28:56 by talkhati         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s1len;
	unsigned int	s2len;
	char			*dest;

	i = 0;
	j = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	dest = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (!s1 || !s2)
		return (NULL);
	while (i < s1len)
	{
		dest[i] = s1[i];
		i++;
	}
	while (j < s2len)
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main(void)
{
    char *joined ;
    joined = ft_strjoin("Hello", "world");
    
        printf("%s\n", joined);
    
    return (0);
}*/
