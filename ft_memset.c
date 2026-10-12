/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:30:32 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 19:30:15 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *start, int init, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)start;
	while (size > 0)
	{
		*ptr++ = (unsigned char)init;
		size--;
	}
	return (start);
}
/*
void	putch(char c)
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

int	main (int ac, char **av)
{
	if (ac != 4)
		return (1);
	putstr(ft_memset(av[1], av[2][0], conv(av[3])));
	putch('\n');
	return (0);
}*/
