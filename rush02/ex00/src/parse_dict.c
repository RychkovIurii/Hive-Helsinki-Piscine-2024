/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:20:38 by omartela          #+#    #+#             */
/*   Updated: 2024/01/28 22:27:25 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_parse_number(int file_descriptor)
{
	char	*str;
	int		i;
	char	buffer[1];

	i = 0;
	str = malloc(sizeof(char) * 148);
	if (!(str))
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
	read(file_descriptor, buffer, 1);
	while (buffer[0] == '\n')
	{
		read(file_descriptor, buffer, 1);
	}
	while (buffer[0] >= '0' && buffer[0] <= '9')
	{
		str[i] = buffer[0];
		read(file_descriptor, buffer, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_parse_value(int file_descriptor, char *buffer )
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 148);
	if (!str)
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
	i = 0;
	while (buffer[0] != '\n')
	{
		str[i] = buffer[0];
		read(file_descriptor, buffer, 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}

t_dict	*ft_parse_dict(int file_descriptor, t_dict *dct)
{
	int		i;
	char	buffer[1];
	char	*temporary;
	char	*temporarynumber;

	i = 0;
	while (i < 41)
	{
		temporarynumber = ft_parse_number(file_descriptor);
		dct[i].nb = ft_strdup(temporarynumber);
		free(temporarynumber);
		read(file_descriptor, buffer, 1);
		while (buffer[0] == ' ')
			read(file_descriptor, buffer, 1);
		if (buffer[0] == ':')
			read(file_descriptor, buffer, 1);
		while (buffer[0] == ' ')
			read(file_descriptor, buffer, 1);
		temporary = ft_parse_value(file_descriptor, buffer);
		dct[i].val = ft_strdup(temporary);
		free(temporary);
		i++;
	}
	return (dct);
}

t_dict	*ft_read_dict(char *file)
{
	int		file_descriptor;
	t_dict	*dct;

	file_descriptor = open(file, O_RDONLY);
	dct = malloc(sizeof(t_dict) * 41);
	if ((!dct) || file_descriptor == -1)
	{
		write(1, "Dict Error\n", 11);
		exit(1);
	}
	dct = ft_parse_dict(file_descriptor, dct);
	close(file_descriptor);
	return (dct);
}
