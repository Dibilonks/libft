#include "libft.h"

char	*ft_strnstr(const char *little, const char *big, size_t len)
{
	const char *s1;
	const char *s2;
	size_t	s;
	size_t	i;
	size_t	j;

	s1 = little;
	s2 = big;
        i = 0;
	s = 0;
        if (s2[0] == '\0')
                return ((char *)s1);
        while (s1[i] && s < len)
        {
                j = 0;
                while (s1[i + j] && s1[i + j] == s2[j])
                {
                        if (s2[j + 1] == '\0')	
                                return ((char *)s1 + i);
                        j++;
                }
		s++;
                i++;
        }
        return (NULL);
}

/*void	putch(char c)
{
	write (1, &c, 1);
}

void	putstr(char *str)
{
	int	i = 0;
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
	char *res = (ft_strnstr(av[1], av[2], conv(av[3])));
	if (res)
	{
		putstr(res);
		putch('\n');
	}
	return (0);
}*/
