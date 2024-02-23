/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:46:06 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/21 17:54:25 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	counter;

	counter = 0;
	len = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while (dest[len])
	{
		len++;
	}
	while (src[counter] && counter < nb)
	{
		dest[len] = src[counter];
		len++;
		counter++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "hive";
	char	dest[15] = "hi ";

	ft_strncat(&dest[0], &src[0], 0);
	printf("%s", dest);
}*/
