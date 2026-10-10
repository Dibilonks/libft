#include "libft.h"

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return(c - 32);
	else
		return(c);
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
	if (ac != 2)
	{
		putstr("nonono\n");
		return (1);
	}
	putch(ft_toupper(av[1][0]));
	putch('\n');
	return (0);
}*/
