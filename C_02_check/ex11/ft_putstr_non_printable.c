/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:33:39 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/14 16:40:14 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	hex(unsigned char c)
{
	char	a;
	char	b;
	char	*hexbase;

	hexbase = "0123456789abcdef";
	a = hexbase[c / 16];
	b = hexbase[c % 16];
	write(1, "\\", 1);
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i])
	{
		a = (unsigned char)str[i];
		if (31 < a && a < 127)
			ft_putchar(a);
		else
			hex(a);
		i++;
	}
}
