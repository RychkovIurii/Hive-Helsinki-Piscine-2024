/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:04:02 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/28 23:33:03 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_three_dig(char *nbr, int *i, int *len, t_dict *dct, int *space)
{
	char	c[2];

	if (nbr[*i] != '0')
	{
		c[0] = nbr[*i];
		ft_print_value(&c[0], dct, space);
		(*space)++;
		ft_print_value("100", dct, space);
		(*space)++;
		if (nbr[*i + 1] == '0' && nbr[*i + 2] == '0')
			ft_say_amount(*len, dct, space);
	}
	(*i)++;
	(*len)--;
}

void	ft_two_dig(int *i, int *len, char *nbr, t_dict *dct, int *space)
{
	if (nbr[*i] >= '2' && nbr[*i] != '\0')
	{
		ft_decimals2(nbr[*i], dct, space);
		(*i)++;
		(*len)--;
		if (nbr[*i] == '0')
		{
			ft_say_amount(*len, dct, space);
			(*i)++;
			(*len)--;
		}
	}
	if (nbr[*i] == '1' && nbr[*i] != '\0' && *len % 3 == 2)
	{
		ft_decimals(nbr[*i + 1], dct, space);
		(*i) += 2;
		if (*len > 3)
			ft_say_amount(*len, dct, space);
		(*len) -= 2;
	}
	if (nbr[*i] == '0' && *len % 3 == 2)
	{
		(*i)++;
		(*len)--;
	}
}

void	ft_one_dig(char *nbr, int *i, int *len, t_dict *dct, int *space)
{
	char	c[2];

	if (nbr[*i] != '0' && nbr[*i] != '\0')
	{
		c[0] = nbr[*i];
		ft_print_value(&c[0], dct, space);
		(*space)++;
		(*i)++;
		ft_say_amount(*len, dct, space);
		(*len)--;
	}
	if (nbr[*i] == '0')
	{
		(*i)++;
		(*len)--;
	}
}

void	ft_separator(char *nbr, t_dict *dct)
{
	int	i;
	int	len;
	int	space;

	i = 0;
	space = 0;
	len = check_length(nbr);
	if (len == 1 && nbr[i] == '0')
	{
		ft_print_value("0", dct, &space);
		space = space + 1;
	}
	while (nbr[i] != '\0')
	{
		if (len % 3 == 0 && nbr[i] != '\0')
			ft_three_dig(nbr, &i, &len, dct, &space);
		if (len % 3 == 2 && nbr[i] != '\0')
			ft_two_dig(&i, &len, nbr, dct, &space);
		if (len % 3 == 1 && nbr[i] != '\0')
			ft_one_dig(nbr, &i, &len, dct, &space);
	}
}
