/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:35:04 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 19:49:08 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (size - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
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
	putnbr(ft_strncmp(av[1], av[2], conv(av[3])));
	putch('\n');
	return (0);
}*/
