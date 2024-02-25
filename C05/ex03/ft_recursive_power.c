/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:58:03 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/23 21:21:28 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_recursive_power(3, -1));
	printf("%d = -27\n", ft_recursive_power(-3, 3));
	printf("%d = 1\n", ft_recursive_power(3, 0));
	printf("%d = 3\n", ft_recursive_power(3, 1));
	printf("%d = 9\n", ft_recursive_power(3, 2));
	printf("%d = 243\n", ft_recursive_power(3, 5));
}*/
