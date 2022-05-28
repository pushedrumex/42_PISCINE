/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:05:01 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/23 14:40:00 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	len_s(char *str, char *charset)
{
	int	len;

	len = 0;
	if (*charset == 0)
		return (1);
	while (*str)
	{
		if (is_charset(*str, charset) == 0)
		{
			len++;
			while (is_charset(*str, charset) == 0)
				str++;
		}
		if (*str == 0)
			break ;
		while (is_charset(*str, charset) == 1 && *str)
			str++;
	}
	return (len);
}

int	len_c(char *str, char *charset)
{
	int	len;

	len = 0;
	while (is_charset(*str, charset) == 0 && *str)
	{
		len++;
		str++;
	}
	return (len);
}

void	put_string(char **a, char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (*str)
	{
		if (is_charset(*str, charset) == 0)
			a[i] = (char *)malloc(sizeof(char) * (len_c(str, charset) + 1));
		j = 0;
		while (is_charset(*str, charset) == 0 && *str)
		{
			a[i][j] = *str;
			str++;
			j++;
		}
		a[i][j] = 0;
		if (*str == 0)
			break ;
		while (is_charset(*str, charset) == 1 && *str)
			str++;
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**a;

	while (is_charset(*str, charset) == 1)
		str++;
	a = (char **)malloc(sizeof(char *) * (len_s(str, charset) + 1));
	a[len_s(str, charset)] = 0;
	put_string(a, str, charset);
	return (a);
}
