/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholopai <jholopai@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 21:59:37 by jholopai          #+#    #+#             */
/*   Updated: 2020/09/03 22:13:28 by jholopai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *sr1, char *sr2)
{
	int i;

	i = 0;
	while (sr1[i] != '\0' || sr2[i] != '\0')
	{
		if (sr1[i] != sr2[i])
		{
			return (sr1[i] - sr2[i]);
		}
		i++;
	}
	return (0);
}
