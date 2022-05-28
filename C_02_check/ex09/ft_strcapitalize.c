/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:52:46 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/14 16:47:46 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (('A' <= str[i] && str[i] <= 'Z') || ('a' <= str[i] && str[i] <= 'z')
			|| ('0' <= str[i] && str[i] <= '9'))
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 32;
			while (1)
			{
				i++;
				if (str[i] == 0)
					return (str);
				if ('A' <= str[i] && str[i] <= 'Z')
					str[i] = str[i] + 32;
				if (!(('A' <= str[i] && str[i] <= 'Z')
						|| ('a' <= str[i] && str[i] <= 'z')
						|| ('0' <= str[i] && str[i] <= '9')))
					break ;
			}
		}
	}
	return (str);
}
