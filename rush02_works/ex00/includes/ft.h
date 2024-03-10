/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:05:05 by omartela          #+#    #+#             */
/*   Updated: 2024/01/28 19:51:00 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct dictionary
{
	char	*nb;
	char	*val;
}	t_dict;

char	*ft_clean_input(char *str);
int		spaces(char *str);
char	*valid_string(char *nbr);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
void	ft_one_dig(char *nbr, int *i, int *len, t_dict *dct);

void	ft_separator(char *nbr, t_dict *dct);
void	ft_two_dig(int *i, int *len, char *nbr, t_dict *dct);
void	ft_three_dig(char *nbr, int *i, int *len, t_dict *dct);
void	ft_one_dig(char *nbr, int *i, int *len, t_dict *dct);

int		check_length(char *nbr);
void	ft_decimals(char c, t_dict *dct);
void	ft_decimals2(char c, t_dict *dct);
void	ft_say_amount(int len, t_dict *dct);

int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_get_value(char *key, t_dict *dct);
int		ft_check_if_dot(char *str);
void	ft_print_value(char *key, t_dict *dct);
char	*handle_input(char *str);

t_dict	*ft_parse_dict(int file_descriptor, t_dict *dct);
t_dict	*ft_read_dict(char *file);

#endif
