/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 23:39:11 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/19 23:54:16 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A program that displays the contents of the file given as an argument.
*/

#include "header.h"

int		ft_excess_files(int argc)
{
	if (argc > 2)
	{
		ft_err_msg("Too many arguments.\n");
		return (1);
	}
	else
		return (0);
}

int		ft_no_file(int argc)
{
	if (argc < 2)
	{
		ft_err_msg("File name missing.\n");
		return (1);
	}
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ft_no_file(argc) == 1 || ft_excess_files(argc) == 1)
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_err_msg("open() has failed.\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_err_msg("close() has failed.\n");
		return (1);
	}
	return (0);
}
