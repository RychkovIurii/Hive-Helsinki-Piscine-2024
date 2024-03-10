/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 14:10:33 by omartela          #+#    #+#             */
/*   Updated: 2024/01/28 23:06:08 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*handle_input(char *str)
{
	char	*ptr;

	ptr = ft_clean_input(str);
	if (ptr == NULL || ptr[0] == '\0')
	{
		write(1, "Error\n", 6);
		return (ptr);
	}
	else if (check_length(ptr) > 39)
	{
		write(1, "Dict Error\n", 11);
		return (ptr);
	}
	return (ptr);
}

void	start_program(char *ptr, char *name)
{
	t_dict	*dct;

	dct = ft_read_dict(name);
	ft_separator(ptr, dct);

	free(dct);
	free(ptr);
}

int	main(int argc, char *argv[])
{
	char	*ptr;

	ptr = argv[1];
	if (argc < 1 || argc > 3)
		write(1, "Error\n", 6);
	if (argc == 2)
	{
		ptr = handle_input(ptr);
		if (ptr != NULL)
		{
			start_program(ptr, "numbers.dict");
		}
	}
	if (argc == 3)
	{
		ptr = handle_input(ptr);
		if (ptr != NULL)
		{
			start_program(ptr, argv[2]);
		}
	}
	return (0);
}
