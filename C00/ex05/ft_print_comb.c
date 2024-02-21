/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:34:39 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/11 15:57:27 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(char a, char b, char c)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7' && b == '8' && c == '9')
	{
		return ;
	}
	else
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_chars(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
}
