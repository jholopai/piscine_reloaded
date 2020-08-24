/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:50:56 by jholopai          #+#    #+#             */
/*   Updated: 2020/08/24 21:01:46 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the factorial of the number given as parameter. The number
** should be positive and not bigger than 12, as anything bigger than
** that can't be handled. The solution had to include a recursive loop.
*/

int		ft_iterative_factorial(int nb)
{
	if (nb > 0 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 0)
		return (1);
	else
		return (0);
}
