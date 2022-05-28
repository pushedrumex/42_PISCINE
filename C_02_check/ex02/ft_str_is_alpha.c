/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srt_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:08:41 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/14 15:46:11 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len == 0)
		return (1);
	i = 0;
	while (i < len)
	{
		if ('A' > str[i] || str[i] > 'z' || ('Z' < str[i] && 'a' > str[i]))
			return (0);
		i++;
	}
	return (1);
}
