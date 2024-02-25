/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 09:50:53 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/24 16:32:34 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (nb > 2147395600)
		return (0);
	if (nb <= 0 || nb == 2)
		return (0);
	while (result * result < nb)
		result = result + 1;
	if (nb % result == 0)
		return (result);
	else
		return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d = 0\n", ft_sqrt(-40));
	printf("%d = 0\n", ft_sqrt(0));
	printf("%d = 1\n", ft_sqrt(1));
	printf("%d = 0\n", ft_sqrt(2));
	printf("%d = 0\n", ft_sqrt(3));
	printf("%d = 2\n", ft_sqrt(4));
	printf("%d = 5\n", ft_sqrt(25));
	printf("%d = 46340\n", ft_sqrt(2147395600));
	printf("%d = 0\n", ft_sqrt(2147483647));
}*/
