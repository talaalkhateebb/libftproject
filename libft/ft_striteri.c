/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:26:35 by talkhati          #+#    #+#             */
/*   Updated: 2025/09/07 14:48:55 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	to_upper(unsigned int i, char *c_ptr)
{
	(void)i;
	if (*c_ptr >= 'a' && *c_ptr <= 'z')
	{
		*c_ptr = *c_ptr - 32;
	}
}
/*int main()
{
    char str1[] = "hello world";
    printf("%s\n", str1);
    ft_striteri(str1,to_upper);
    printf("%s\n", str1);
       return (0);
}*/
