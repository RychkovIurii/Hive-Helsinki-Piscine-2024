/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:14:13 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/25 10:31:19 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	temp;
	int	counter;

	temp = 1;
	counter = 2;
	if (nb <= 1)
		return (2);
	while (counter <= nb / counter)
	{
		if (nb % counter == 0)
			temp = 0;
		counter = counter + 1;
	}
	if (temp == 0)
		return (ft_find_next_prime(nb + 1));
	else
		return (nb);
}
/*
#include <stdio.h>

int main()
{
	printf("%d = 2\n", ft_find_next_prime(-40));
	printf("%d = 2\n", ft_find_next_prime(0));
	printf("%d = 2\n", ft_find_next_prime(1));
	printf("%d = 2\n", ft_find_next_prime(2));
	printf("%d = 3\n", ft_find_next_prime(3));
	printf("%d = 83\n", ft_find_next_prime(80));
	printf("%d = 83\n", ft_find_next_prime(83));
	printf("%d = broken?\n", ft_find_next_prime(2147483647));
	printf("%d = broken?\n", ft_find_next_prime(2147483646));

}*/
