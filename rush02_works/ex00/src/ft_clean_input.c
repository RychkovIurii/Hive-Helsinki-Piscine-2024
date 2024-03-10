/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniinisa <iniinisa@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:29:32 by iniinisa          #+#    #+#             */
/*   Updated: 2024/01/28 22:54:11 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*check_zeros(char *nbr)
{
	int		i;
	char	*res;

	i = 0;
	while (nbr[i] && nbr[i] == '0' && nbr[i + 1] == '0')
		++i;
	if (i > 0 && (nbr[i + 1] >= '1' && nbr[i + 1] <= '9'))
		++i;
	res = &nbr[i];
	return (res);
}

int	check_sign(char *nbr, int i)
{
	int	sign;

	sign = 1;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign *= -1;
		++i;
	}
	if (sign == -1)
		return (-1);
	return (i);
}

char	*ft_clean_input(char *nbr)
{
	int		i;
	int		j;
	char	*res;

	i = spaces(nbr);
	i = check_sign(nbr, i);
	j = 0;
	if (i == -1)
		return (NULL);
	res = (char *)malloc(sizeof(char) * 40);
	if (!(res))
		return (res);
	while (nbr[i] >= '0' && nbr[i] <= '9')
		res[j++] = nbr[i++];
	if (nbr[i] == '.' && (nbr[i + 1] >= '0' && nbr[i + 1] <= '9'))
	{
		free(res);
		return (NULL);
	}
	if (res != NULL)
	{
		res[j] = '\0';
		check_zeros(res);
	}
	return (res);
}
