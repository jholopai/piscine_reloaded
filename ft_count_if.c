/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 19:08:00 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/13 19:13:40 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function given as parameter to each element of the array.
** Returns the amount of elements that, when being applied the function,
** result as [1].
*/

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
		{
			result++;
		}
		i++;
	}
	return (result);
}
