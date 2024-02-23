/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:14:03 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/18 17:26:36 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		str++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello";

	printf("%d = 5", ft_strlen(str));
}*/
