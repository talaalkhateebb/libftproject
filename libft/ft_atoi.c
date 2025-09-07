/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:35:12 by talkhati          #+#    #+#             */
/*   Updated: 2025/08/21 17:46:44 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	v;

	i = 0;
	neg = 1;
	v = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		v = v * 10 + (str[i] - 48);
		i++;
	}
	return (v * neg);
}
/*
int main (void)
{
	char s1[] =" -1tala";
	printf("%d",atoi(s1));
	printf("\n%d",ft_atoi(s1));
}*/
