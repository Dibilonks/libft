#include "libft.h"

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return(1);
	return(0);
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

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		putstr("nonono\n");
		return (1);
	}
	putnbr(ft_isdigit(av[1][0]));
	putch('\n');
	return (0);
}*/
