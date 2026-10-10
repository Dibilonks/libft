#include "libft.h"

/*void    putch(char c)
{
        write (1, &c, 1);
}

void	f(unsigned int i, char *str)
{
	putch(str[i] -= 32);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}

/*void	putstr(char *str)
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
	ft_striteri(av[1], f(0, av[1]));
	return(0);
}*/

