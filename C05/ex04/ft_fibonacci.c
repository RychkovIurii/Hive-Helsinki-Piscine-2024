/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:45:03 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/24 12:38:56 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d = -1\n", ft_fibonacci(-20));
	printf("%d = 0\n", ft_fibonacci(0));
	printf("%d = 1\n", ft_fibonacci(1));
	printf("%d = 1\n", ft_fibonacci(2));
	printf("%d = 8\n", ft_fibonacci(6));
	printf("%d = 89\n", ft_fibonacci(11));
	printf("%d = 377\n", ft_fibonacci(14));
}*/
