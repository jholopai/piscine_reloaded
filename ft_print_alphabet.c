/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/09 17:13:42 by jholopai          #+#    #+#             */
/*   Updated: 2020/08/09 17:20:17 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints out the alphabet. Allowed functions: ft_putchar.
*/

#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}
