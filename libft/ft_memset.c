/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 13:47:42 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/21 17:53:02 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
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
/*#include <stdio.h>
#include <string.h>

int	main(void) {
   char s1[]="tala ";
   char *str =ft_memset(s1, 'a',3);
   printf("%s",str);
   char *str1 =memset(s1, 'a',3);
   printf("%s",str1);

    return (0);
}*/
