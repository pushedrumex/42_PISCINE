/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:55:15 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/23 21:06:42 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	measure_len(int size, char **str, char *sep)
{
	int	len_str;
	int	len_sep;
	int	i;

	len_str = 0;
	len_sep = 0;
	if (size == 0)
		return (1);
	while (sep[len_sep])
		len_sep++;
	size--;
	while (size >= 0)
	{
		len_str += len_sep;
		i = 0;
		while (str[size][i++])
			len_str++;
		size--;
	}
	return (len_str - len_sep + 1);
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*array;
	int		len;
	int		i;
	int		j;
	int		k;

	len = measure_len(size, str, sep);
	array = (char *)malloc(sizeof(char) * len);
	array[--len] = 0;
	i = 0;
	j = 0;
	while (i < len)
	{
		k = -1;
		while (str[j][++k])
			array[i++] = str[j][k];
		j++;
		if (i == len)
			break ;
		k = -1;
		while (sep[++k])
			array[i++] = sep[k];
	}
	return (array);
}
