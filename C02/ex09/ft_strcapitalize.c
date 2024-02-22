/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:00:19 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/16 19:09:02 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	int	i;
	char	s;
	int	cond;

	i = 0;
	cond = 1;
	while (str[i] != '\0')
	{
		s = str[i];
		if (cond == 1 && s >= 'a' && s <= 'z')
			str[i] = str[i] - 32;
		else if (cond == 0 && s >= 'A' && s <= 'Z')
			str[i] = str[i] + 32;
		if (s < '0' || (s > '9' && s < 'A')
			|| (s > 'Z' && s < 'a') || s > 'z')
			cond = 1;
		else
			cond = 0;
		i++;
	}
	return (str);
}
