/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:57:32 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/16 09:54:42 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	letter_is_alpha(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (1);
	}
	else if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

int	ft_str_is_alpha(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(letter_is_alpha(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
