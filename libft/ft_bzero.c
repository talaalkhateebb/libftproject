/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:13:59 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/21 17:53:42 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
	return (p);
}
/*
int	main(void)
{
    char str[]= "tala";
    ft_bzero(str, 4);
    printf("%s\n",  str);
   char str1[]= "tala";
    bzero(str1,5);
          printf("%s\n",  str1);
    return (0);
}*/
