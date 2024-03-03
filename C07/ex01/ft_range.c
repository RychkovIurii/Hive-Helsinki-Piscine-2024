/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:11:09 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/29 11:33:14 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;
	int	total;

	i = 0;
	total = max - min;
	if (min >= max)
		return (NULL);
	ptr = malloc(total * sizeof(int));
	if (ptr == NULL)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*ptr;
	int	i;

	i = 0;
	ptr = ft_range(5, 9);
	printf("The elements of the array are:\n");
	while (i < 4)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
}*/
