/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 23:54:11 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/06 00:08:41 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** A program that prints out arguments given via command line in order
** according to their ASCII-value. Allowed functions: ft_putchar.
*/

int		ft_strcmp(char *sr1, char *sr2)
{
	int i;

	i = 0;
	while (sr1[i] != '\0' || sr2[i] != '\0')
	{
		if (sr1[i] > sr2[i])
		{
			return (1);
		}
		else if (sr1[i] < sr2[i])
		{
			return (2);
		}
		i++;
	}
	return (0);
}

void	ft_swap(int argc, char **argv)
{
	int		row;
	int		row2;
	char	*temp;

	row = 1;
	row2 = 2;
	temp = argv[row];
	while (row < argc)
	{
		while (row2 < argc)
		{
			if (ft_strcmp(argv[row], argv[row2]) == 1)
			{
				temp = argv[row];
				argv[row] = argv[row2];
				argv[row2] = temp;
			}
			row2++;
		}
		row2 = (row + 1);
		row++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int letter;

	i = 1;
	letter = 0;
	ft_swap(argc, argv);
	while (i < argc)
	{
		while (argv[i][letter] != '\0')
		{
			ft_putchar(argv[i][letter]);
			letter++;
		}
		ft_putchar('\n');
		letter = 0;
		i++;
	}
	return (0);
}
