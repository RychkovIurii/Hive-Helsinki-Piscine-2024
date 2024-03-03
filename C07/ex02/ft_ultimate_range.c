/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:34:39 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/29 12:15:10 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	total;
	int	*ptr;

	i = 0;
	total = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc(total * sizeof(int));
	if (ptr == NULL)
		return (-1);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*ptr;
	int amount;
	int	i;

	i = 0;
	amount = ft_ultimate_range(&ptr, 5, 9);
	printf(" amount = %d\nThe elements of the array are:\n", amount);
	while (i < amount)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
}*/
