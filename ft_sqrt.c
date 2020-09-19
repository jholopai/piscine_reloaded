/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 23:49:36 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/19 23:54:33 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns the square root of the given
** number if it has a perfect square root.
*/

int		ft_sqrt(int nb)
{
	int result;
	int sqrt_candidate;

	result = 0;
	sqrt_candidate = 2;
	while (sqrt_candidate < nb)
	{
		result = sqrt_candidate * sqrt_candidate;
		if (result == nb)
			return (sqrt_candidate);
		sqrt_candidate++;
	}
	return (0);
}
