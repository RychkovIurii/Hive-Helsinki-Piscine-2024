/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:55:29 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/25 10:30:53 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_recursive_factorial(-32));
	printf("%d = 1\n", ft_recursive_factorial(0));
	printf("%d = 1\n", ft_recursive_factorial(1));
	printf("%d = 2\n", ft_recursive_factorial(2));
	printf("%d = 6\n", ft_recursive_factorial(3));
	printf("%d = 120\n", ft_recursive_factorial(5));
	printf("%d = 40320\n", ft_recursive_factorial(8));
	printf("%d = 362880\n", ft_recursive_factorial(9));
}*/
