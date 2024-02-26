/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:37:10 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/25 11:54:32 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i = i + 1;
	}
}
