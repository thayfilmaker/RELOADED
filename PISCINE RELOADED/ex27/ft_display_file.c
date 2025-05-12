/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thasousa <thasousa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:17:29 by thasousa          #+#    #+#             */
/*   Updated: 2025/04/09 15:20:25 by thasousa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_display_file(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	while (read(fd, &c, 1))
	{
		write(1, &c, 1);
	}
	close(fd);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(av[1]);
	return (0);
}
