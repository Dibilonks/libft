#include "libft.h"

/*char *ft_strrchr(const char *str, int c)
{
	char *found;

	found = 0;
	while(*str)
	{
		if(*str == (char)c)
			found = ((char *)str);
		str++;
	}
	if(found)
		return(found);
	else if(c == '\0')
		return((char *)str);
	return(0);
}*/

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0 && str[i] != (char)c)
		i--;
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
	putstr(ft_strrchr(av[1], av[2][0]));
	putch('\n');
	return (0);
}*/
