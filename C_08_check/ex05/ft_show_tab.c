/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:03:05 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/21 17:15:48 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = -1;
	while (par[++i].str)
	{
		j = -1;
		while (par[i].str[++j])
			write(1, &(par[i].str[j]), 1);
		write(1, "\n", 1);
		putnbr(par[i].size);
		write(1, "\n", 1);
		j = -1;
		while (par[i].copy[++j])
			write(1, &(par[i].copy[j]), 1);
		write(1, "\n", 1);
	}
}
