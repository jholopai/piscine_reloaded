/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:08:36 by jholopai          #+#    #+#             */
/*   Updated: 2020/08/09 17:19:11 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints out all digits from 0 to 9. Allowed functions: ft_putchar.
*/

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
