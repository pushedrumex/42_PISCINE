/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:02:41 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/21 14:34:30 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	length(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*struct_copy(char *s)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (length(s) + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*p;

	p = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		p[i].size = length(av[i]);
		p[i].str = av[i];
		p[i].copy = struct_copy(av[i]);
		i++;
	}
	p[i].str = 0;
	return (p);
}
