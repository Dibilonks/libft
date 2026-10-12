/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedpared <pedpared@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:31:12 by pedpared          #+#    #+#             */
/*   Updated: 2026/10/12 19:31:01 by pedpared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}*/

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*int	main(int ac, char **av)
{
	(void)ac;
	ft_putendl_fd(av[1], 1);
	return (0);
}*/
