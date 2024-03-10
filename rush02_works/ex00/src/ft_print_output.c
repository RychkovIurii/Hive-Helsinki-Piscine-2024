/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_output.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:03:58 by omartela          #+#    #+#             */
/*   Updated: 2024/01/28 21:56:03 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p1;
	unsigned char	*p2;
	unsigned int	i;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	i = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && p1[i] == p2[i])
	{
		i = i + 1;
	}
	return (p1[i] - p2[i]);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_get_value(char *key, t_dict *dct)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (ft_strcmp(dct[i].nb, key) == 0)
		{
			return (dct[i].val);
		}
		++i;
	}
	return (0);
}

int	ft_check_if_dot(char *str)
{
	while (*str)
	{
		if (*str == '.')
		{
			return (1);
		}
		++str;
	}
	return (0);
}

void	ft_print_value(char *key, t_dict *dct)
{
	char	*value;

	value = ft_get_value(key, dct);
	while (*value != '\0')
	{
		write(1, value, 1);
		value = value + 1;
	}
	write(1, " ", 1);
}
