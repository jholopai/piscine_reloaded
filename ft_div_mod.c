/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 22:41:07 by jholopai          #+#    #+#             */
/*   Updated: 2020/08/12 22:45:40 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Result from a being divided by b is saved into div.
** The modulo is saved into mod.
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
