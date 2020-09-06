/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 18:05:37 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/06 18:14:31 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a duplicate of the given string. Allowed functions: malloc.
*/

char	*ft_strdup(char *src)
{
	int i;
	char *duplicate;

	if (src)
	{
		i = 0;
		while (src[i] != '\0')
			i++;
		duplicate = (char*)malloc(i * sizeof(char) + 1);
		while (i >= 0)
		{
			duplicate[i] = src[i];
			i--;
		}
		return (duplicate);
	}
}
