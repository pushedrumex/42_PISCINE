/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:41:26 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/09 21:42:08 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *p, int n)
{
	int	k;

	k = 0;
	while (k < n - 1)
	{
		if (p[k + 1] <= p[k])
			return ;
		k++;
	}
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
	}
	if (*(p - n) + n != 58)
		write(1, ", ", 2);
}

void	init(char *b, int n)
{
	int	j;

	b[n] = '\0';
	b[0] = '0';
	j = 1;
	while (j < n)
	{
		b[j] = b[j - 1] + 1;
		j++;
	}
}

void	ft_print_combn(int n)
{
	char	a[10];
	int		i;

	init(a, n);
	while (a[0] + n <= 58)
	{
		print(a, n);
		i = n - 1;
		while (i > 0)
		{
			if (a[i] == '9')
			{
				a[i - 1]++;
				a[i] = '0';
			}
			i--;
		}
		a[n - 1]++;
	}
}
