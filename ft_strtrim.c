/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:35:49 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 17:35:52 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

static int	zerone(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && zerone(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && zerone(s1[end - 1], set))
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*static int	cost(const char *str, const char *set)
{
	size_t	i;
	size_t	y;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		y = 0;
		while (set[y])
		{
			if (str[i] == set[y])
				res++;
			y++;
		}
		i++;
	}
	return (res);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	y;
	size_t	n;
	size_t	yesman;
	int	cos;

	cos = (ft_strlen(s1)) - (cost(s1, set));
	str = malloc(sizeof(char) * (cos + 1));
	if (!str)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i])
	{
		y = 0;
		yesman = 1;
		while (set[y])
		{
			if (s1[i] == set[y])
				yesman = 0;
			y++;
		}
		if (yesman == 1)
		{
			str[n] = s1[i];
			n++;
		}
		i++;
	}
	str[n] = '\0';
	return (str);
}*/

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
	putstr(ft_strtrim(av[1], av[2]));
	putch('\n');
	return (0);
}*/
