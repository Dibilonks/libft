/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:33:49 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 19:44:02 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*void	putch(char c)
{
	write (1, &c, 1);
}

void	putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		putch(str[i]);
		i++;
	}
}

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		putstr("-2147483648");
		return;
	}
	if (nb < 0)
	{
		putch('-');
		nb = -nb;
	}
	if (nb > 9)
		putnbr(nb / 10);
	putch(nb % 10 + '0');
}

int	conv(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		putstr("nonono\n");
		return (1);
	}	
	putnbr(ft_strlcpy(av[1], av[2], conv(av[3])));
	putch('\n');
	return (0);
}*/
