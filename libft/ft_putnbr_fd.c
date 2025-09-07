/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talkhati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 16:33:29 by talkhati          #+#    #+#             */
/*   Updated: 2025/09/03 16:34:01 by talkhati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit_char;

	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		digit_char = (n % 10) + '0';
		write(fd, &digit_char, 1);
	}
	else
	{
		digit_char = n + '0';
		write(fd, &digit_char, 1);
	}
}
/*int main()
{
ft_putnbr_fd(-22, 1);
return (0);
}*/
