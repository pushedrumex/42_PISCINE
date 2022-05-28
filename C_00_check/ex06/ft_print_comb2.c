/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:13:10 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/07 21:20:45 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a / 10 + '0');
			print(a % 10 + '0');
			print(' ');
			print(b / 10 + '0');
			print(b % 10 + '0');
			if (a != 98)
			{	
				print(',');
				print(' ');
			}
			b++;
		}
		a++;
	}
}
