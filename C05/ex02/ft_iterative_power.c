/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 19:48:49 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/23 20:40:17 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * temp;
		power = power - 1;
	}
	return (nb);
}
/*
#include <stdio.h>

int main()
{
	printf("%d = 0\n", ft_iterative_power(3, -1));
	printf("%d = -27\n", ft_iterative_power(-3, 3));
	printf("%d = 1\n", ft_iterative_power(3, 0));
	printf("%d = 3\n", ft_iterative_power(3, 1));
	printf("%d = 9\n", ft_iterative_power(3, 2));
	printf("%d = 243\n", ft_iterative_power(3, 5));
}*/
