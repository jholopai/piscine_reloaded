/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 23:21:01 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/05 23:33:53 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** A program that prints out arguments given via command line.
** Allowed functions: ft_putchar.
*/

int		main(int argc, char **argv)
{
	int	row;
	int letter;

	if (argc > 1)
	{
		row = 1;
		letter = 0;
		while (argv[row])
		{
			while (argv[row][letter] != '\0')
			{
				ft_putchar(argv[row][letter]);
				letter++;
			}
			ft_putchar('\n');
			letter = 0;
			row++;
		}
	}
	return (0);
}
