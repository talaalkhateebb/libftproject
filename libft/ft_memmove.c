/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:45:31 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/19 16:26:18 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (len > 0)
	{
		len--;
		d[len] = s[len];
	}
	return (dst);
}
/*int	main(void)
{
	char	src[]="helllo";
	char	dst[]="hello";
	char *s,*d;
	s=ft_memmove(dst, src, 4);
	printf("%s\n", s);
	d=memmove(dst, src, 4);
	printf("%s\n", d);
	return (0);
}*/
//hello
//llo
//hello
//ell
