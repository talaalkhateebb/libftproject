/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 12:50:37 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/21 18:15:39 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, int n)
{
	int				i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (n > 0)
	{
		p[i] = c;
		i++;
		n--;
	}
	return (p);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	s = malloc(size * nmemb);
	if (!s)
		return (NULL);
	s = ft_memset(s, 0, nmemb * size);
	return (s);
}
/*
int	main(void)
{
   char *str =ft_calloc(5, sizeof(char));
   printf("%s",str);
   char *str1 =calloc(5, sizeof(char));
   printf("%s",str1);

    return (0);
}*/
