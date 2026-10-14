/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:27:07 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/14 19:00:44 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	*ft_memset(void *s, int init, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (size > 0)
	{
		*ptr++ = (unsigned char)init;
		size--;
	}
	return (s);
}*/
void	ft_bzero(void *s, size_t size)
{
	ft_memset(s, '\0', size);
}
/*
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
	if (ac != 3)
		return (1);
	ft_bzero(av[1], conv(av[2]));
	putch('\n');
	return (0);
}*/
