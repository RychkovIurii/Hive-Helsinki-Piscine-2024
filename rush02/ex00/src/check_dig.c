/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dig.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:23:07 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/28 23:32:03 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_decimals2(char c, t_dict *dct, int *space)
{
	if (c == '2')
		ft_print_value("20", dct, space);
	else if (c == '3')
		ft_print_value("30", dct, space);
	else if (c == '4')
		ft_print_value("40", dct, space);
	else if (c == '5')
		ft_print_value("50", dct, space);
	else if (c == '6')
		ft_print_value("60", dct, space);
	else if (c == '7')
		ft_print_value("70", dct, space);
	else if (c == '8')
		ft_print_value("80", dct, space);
	else if (c == '9')
		ft_print_value("90", dct, space);
	(*space)++; 
}

int	check_length(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i] != '\0')
		i++;
	return (i);
}

void	ft_decimals(char c, t_dict *dct, int *space)
{
	if (c == '0')
		ft_print_value("10", dct, space);
	else if (c == '1')
		ft_print_value("11", dct, space);
	else if (c == '2')
		ft_print_value("12", dct, space);
	else if (c == '3')
		ft_print_value("13", dct, space);
	else if (c == '4')
		ft_print_value("14", dct, space);
	else if (c == '5')
		ft_print_value("15", dct, space);
	else if (c == '6')
		ft_print_value("16", dct, space);
	else if (c == '7')
		ft_print_value("17", dct, space);
	else if (c == '8')
		ft_print_value("18", dct, space);
	else if (c == '9')
		ft_print_value("19", dct, space);
	(*space)++;
}

void	ft_say_amount(int len, t_dict *dct, int *space)
{
	if (len >= 37 && len < 40)
		ft_print_value("1000000000000000000000000000000000000", dct, space);
	else if (len >= 34 && len < 37)
		ft_print_value("1000000000000000000000000000000000", dct, space);
	else if (len >= 31 && len < 34)
		ft_print_value("1000000000000000000000000000000", dct, space);
	else if (len >= 28 && len < 31)
		ft_print_value("1000000000000000000000000000", dct, space);
	else if (len >= 25 && len < 28)
		ft_print_value("1000000000000000000000000", dct, space);
	else if (len >= 22 && len < 25)
		ft_print_value("1000000000000000000000", dct, space);
	else if (len >= 19 && len < 22)
		ft_print_value("1000000000000000000", dct, space);
	else if (len >= 16 && len < 19)
		ft_print_value("1000000000000000", dct, space);
	else if (len >= 13 && len < 16)
		ft_print_value("1000000000000", dct, space);
	else if (len >= 10 && len < 13)
		ft_print_value("1000000000", dct, space);
	else if (len >= 7 && len < 10)
		ft_print_value("1000000", dct, space);
	else if (len >= 4 && len < 7)
		ft_print_value("1000", dct, space);
	(*space)++;
}
