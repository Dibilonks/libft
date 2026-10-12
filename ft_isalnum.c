/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:28:26 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 18:36:56 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_isalpha(int nb)
{
	if ((nb >= 'A' && nb <= 'Z') || (nb >= 'a' && nb <= 'z'))
		return (1);
	return (0);
}

int	ft_isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	return (0);
}*/

int	ft_isalnum(int ch)
{
	if ((ft_isalpha(ch) || ft_isdigit(ch)) == 1)
		return (1);
	return (0);
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
	if (ac != 2)
		return (1);
	putnbr(ft_isalnum(av[1][0]));
	putch('\n');
	return (0);
}*/
