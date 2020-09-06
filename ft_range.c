/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:14:40 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/06 18:29:00 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns an array of numbers between min and max, including min but not
** including max. If min is greater or equal to max a NULL pointer is returned.
** Allowed functions: malloc.
*/

int		*ft_range(int min, int max)
{
	int *array;
	int temp;

	temp = min;
	if (min >= max)
		array = NULL;
	else
	{
		array = (int*)malloc((max - min) * sizeof(int));
		while (temp < max)
		{
			*array = temp;
			temp++;
			array++;
		}
		array -= (max - min);
	}
	return (array);
}
