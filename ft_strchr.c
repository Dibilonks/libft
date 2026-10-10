#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != (char)c)
		i++;
	if (str[i] == (char)c)
		return ((char *)str + i);
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

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		putstr("nonono\n");
		return (1);
	}
	putstr(ft_strchr(av[1], av[2][0]));
	putch('\n');
	return (0);
}*/
