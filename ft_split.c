/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:32:27 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 20:48:38 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t ft_strlen(const char *str)
{
        size_t  i;

        i = 0;
        while(str[i])
                i++;
        return(i);
}*/

static int	ft_cost(const char *str, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] && str[i] != c)
		{
			while (str[i] && str[i] != c)
				i++;
			n++;
		}
		while (str[i] && str[i] == c)
			i++;
	}
	return (n);
}

static int	ft_fill_split(char **res, const char *s, char c, size_t *j)
{
	size_t	i;
	size_t	start;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[*j] = malloc(sizeof(char) * (i - start + 1));
			if (!res[*j])
				return (0);
			ft_memcpy(res[*j], s + start, i - start);
			res[*j][i - start] = '\0';
			(*j)++;
		}
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	j;

	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_cost(s, c) + 1));
	if (!res)
		return (NULL);
	j = 0;
	if (!ft_fill_split(res, s, c, &j))
	{
		while (j > 0)
			free (res[--j]);
		free (res);
		return (NULL);
	}
	res[j] = NULL;
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
