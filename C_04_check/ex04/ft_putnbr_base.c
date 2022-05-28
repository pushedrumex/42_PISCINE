/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:08:56 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/16 14:55:49 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *c)
{
	int	i;
	int	j;

	if (*c == 0 || *(c + 1) == 0)
		return (1);
	i = 0;
	while (c[i])
	{
		if (c[i] == '+' || c[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (c[i])
	{
		j = i + 1;
		while (c[j])
		{
			if (c[i] == c[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print(int nbr, char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	if (nbr == -2147483648)
	{
		print(nbr / len, base);
		ft_putchar(base[2147483648 % len]);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		print(-nbr, base);
	}
	else
	{
		if (nbr > len - 1)
		{
			print(nbr / len, base);
			print(nbr % len, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = 0;
	if (check_base(base) == 1)
		return ;
	print(nbr, base);
}
