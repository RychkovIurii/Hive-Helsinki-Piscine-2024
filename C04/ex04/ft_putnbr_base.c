/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:19:13 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/23 17:48:38 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	is_base_val(char *base)
{
	int	i;
	int	j;
	int	basesize;

	i = 0;
	basesize = ft_strlen(base);
	if (base[i] == '\0' || basesize <= 1)
		return (1);
	while (i < basesize - 1)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		while (j < basesize)
		{
			if (base [i] == base[j])
				return (1);
			else
				j = j + 1;
		}
		i = i + 1;
	}
	return (0);
}

void	print_nbr(int nbr, char	*base, int size)
{
	char			output;
	unsigned int	temp;

	if (nbr < 0 && nbr != -2147483648)
	{
		write(1, "-", 1);
		temp = -nbr;
	}
	else if (nbr == -2147483648)
	{
		write(1, "-", 1);
		temp = 2147483648;
	}
	else
		temp = nbr;
	if (temp >= (unsigned int)size)
		print_nbr(temp / size, base, size);
	output = base[temp % size];
	write(1, &output, 1);
}

void	ft_putnbr_base(int nbr, char	*base)
{
	int		index;

	index = 0;
	if (!(is_base_val(base)))
	{
		while (base[index] != '\0')
		{
			index++;
		}
		print_nbr(nbr, base, index);
	}
}
/*
int	main()
{
	ft_putnbr_base(-2147483648, "0123456789");
    ft_putnbr_base(-42, "01");
    ft_putnbr_base(255, "0123456789ABCDEF");
    ft_putnbr_base(64, "01234567");
    return (0);
}*/
