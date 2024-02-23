/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:25:20 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/19 11:34:00 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < (n - 1))
		i++;
	if ((n == 0) || (s1[i] == s2[i]))
		return (0);
	else
		return (s1[i] - s2[i]);
}

int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		++i;
		str++;
	}
	return (i);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	char			*ptr;
	unsigned int	find_len;

	ptr = str;
	find_len = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (*ptr)
	{
		if (ft_strncmp(ptr, to_find, find_len) == 0)
		{
			return (ptr);
		}
		++ptr;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   char haystack[20] = "TutorialsPoint";
   char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}*/
