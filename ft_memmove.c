#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	size_t	i;


	i = 0;
	if(!src && !dst)
		return(NULL);
	src1 = (char *)src;
	dst1 = (char *)dst;
	while (i != len)
	{
		dst1[i] = src1[i];
		i++;
	}
	dst = dst1;
	return (dst);
}/*

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

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		putstr("nonono\n");
		return (1);
	}
	putstr(ft_memmove(av[1], av[2], conv(av[3])));
	putch('\n');
	return (0);
}*/
