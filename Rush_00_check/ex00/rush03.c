/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <minjukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:00:28 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/08 15:11:07 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int	x, int	y, int	cx, int	cy)
{
	if (cy == 0 || cy == y - 1)
	{
		if (cx == 0)
			ft_putchar('A');
		else if (cx == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (cx == 0 || cx == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int	x, int	y)
{
	int	cx;
	int	cy;

	if (x <= 0 || y <= 0)
		return ;
	cy = 0;
	while (cy < y)
	{
		cx = 0;
		while (cx < x)
		{
			ft_print(x, y, cx, cy);
			cx++;
		}
		ft_putchar('\n');
		cy++;
	}
}
