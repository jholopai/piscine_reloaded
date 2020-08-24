/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 20:43:58 by jholopai          #+#    #+#             */
/*   Updated: 2020/08/24 21:01:41 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the factorial of the number given as parameter. The number
** should be positive and not bigger than 12, as anything bigger than
** that can't be handled.
*/

int		ft_iterative_factorial(int nb)
{
	int multiplier;
	int result;

	multiplier = 1;
	result = 0;
	if (nb >= 0 && nb < 13)
	{
		result = 1;
		if (nb > 0)
		{
			while (multiplier <= nb)
			{
				result *= multiplier;
				multiplier++;
			}
		}
	}
	return (result);
}
