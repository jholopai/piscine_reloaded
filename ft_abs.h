/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:33:29 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/06 18:38:38 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A macro that returns the absolute value of the given value.
*/

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value) ((value)<0?-(value):(value))
#endif
