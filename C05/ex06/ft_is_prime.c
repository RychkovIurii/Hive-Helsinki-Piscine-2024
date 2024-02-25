/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 10:39:53 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/24 11:18:18 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (nb % counter != 0)
		counter = counter + 1;
	if (counter == nb)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d = 0\n", ft_is_prime(-40));
	printf("%d = 0\n", ft_is_prime(0));
	printf("%d = 0\n", ft_is_prime(1));
	printf("%d = 1\n", ft_is_prime(2));
	printf("%d = 1\n", ft_is_prime(3));
	printf("%d = 0\n", ft_is_prime(82));
	printf("%d = 1\n", ft_is_prime(83));
}*/
