/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:11:41 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/14 11:22:45 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int	*tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i = i + 1;
		size = size - 1;
	}
}
