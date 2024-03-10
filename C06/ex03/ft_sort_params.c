/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:37:58 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/25 16:35:33 by irychkov         ###   ########.fr       */
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
	write(1, "\n", 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
	{
		i = i + 1;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		k;
	char	*swp;

	k = 1;
	j = 1;
	while (j < argc)
	{
		i = j;
		while (i > 1 && ft_strcmp(argv[i], argv[i - 1]) < 0)
		{
			swp = argv[i - 1];
			argv[i - 1] = argv[i];
			argv[i] = swp;
			i = i - 1;
		}
		j = j + 1;
	}
	while (k < argc)
	{
		ft_putstr(argv[k]);
		k = k + 1;
	}
}
