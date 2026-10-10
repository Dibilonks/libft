#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	ch;
	size_t	i;

	i = 0;
	s = ((unsigned char *)str);
	ch = ((unsigned char)c);

	while (i < n && s[i])
	{
		if (s[i] == ch)
			return((void *)s + i);
		i++;
	}
	return(NULL);
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
	if (ft_memchr(av[1], av[2][0], conv(av[3])) == NULL)
		return(1);
	putstr(ft_memchr(av[1], av[2][0], conv(av[3])));
	putch('\n');
	return (0);
}*/
