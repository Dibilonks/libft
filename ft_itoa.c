#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

static  char    *inv(char *str)
{
        int  i;
        int  j;
        char    *s;

        s = malloc(sizeof(char) * (ft_strlen(str) + 1));
        i = 0;
        j = ft_strlen(str) - 1;
        while (j >= 0)
        {
                s[i] = str[j];
                i++;
                j--;
        }
        s[i] = '\0';
        return (s);
}

static	int	len(int n)
{
	long	nb;
	int	c;

	c = 0;
	nb = n;
	while (nb < 0)
	{
		nb = -nb;
		c++;
	}
	while (nb > 0)
	{
		c++;
		nb = nb / 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	i;

	res = malloc(sizeof(char) * (len(n) + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		res[i] = (n % 10 + '0');
		n = n / 10;
		i++;
	}
	if (-n)
	{
		res[i] = '-';
		i++;
	}
	res[i] = '\0';
	return (inv(res));
}

/*int	conv(char *str)
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

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		putstr("nonono\n");
		return (1);
	}
	putstr(ft_itoa(conv(av[1])));
	putch('\n');
	return (0);
}*/
