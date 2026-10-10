#include "libft.h"

/*size_t ft_strlen(const char *str)
{
        size_t  i;

        i = 0;
        while(str[i])
                i++;
        return(i);
}*/

static int     cost(const char *str, char c)
{
        int     i;
        int     n;

        i = 0;
        n = 0;
        while (str[i])
        {
                while (str[i] && str[i] != c)
                        i++;
                while (str[i] && str[i] == c)
                        i++;
                n++;
        }
        return (n);
}

char **ft_split(const char *s, char c)
{
	char	**res;
	size_t	i; //index de string
	size_t	j; // index pour l'array
	size_t	y; // index pour copier
	size_t	n; // index pour chque mot
	size_t	h; // bomboclaat
	
	if (!s)
		return (NULL);
	if (!c)
		return (NULL);
	res = malloc(sizeof(char *) * (cost(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		h = i;
		y = 0;
		n = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			n++;
		}
		if (s[i] || s[i] == c || s[i] == '\0')
		{
			res[j] = malloc(sizeof(char) * (n + 1));
			if (!res[j])
				return (NULL);
			while (y < n)
			{
				res[j][y] = s[h + y];
				y++;
			}
			res[j][y] = '\0';
			while (s[i] == c)
				i++;
		}
		j++;
	}
	res[j] = '\0';
	return (res);
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
	char **res;
	size_t	j;

	res = ft_split(av[1], av[2][0]);
	j = 0;
	while (res[j])
	{
		putstr(res[j]);
		putch('\n');
		j++;
	}
	return (0);
}*/
