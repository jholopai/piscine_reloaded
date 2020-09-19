/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_err_msg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 18:37:28 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/19 18:54:37 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints out the given error message using write's standard error output.
*/

#include "header.h"

void	ft_err_msg(char *sr)
{
	int i;

	i = 0;
	while (sr[i] != '\0')
	{
		i++;
	}
	write(2, sr, i);
}
