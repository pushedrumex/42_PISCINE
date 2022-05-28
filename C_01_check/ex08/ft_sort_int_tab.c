/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 21:13:01 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/09 16:24:03 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	least;

	i = 0;
	while (i < size)
	{
		least = i;
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + least))
				least = j;
			j++;
		}
		temp = *(tab + i);
		*(tab + i) = *(tab + least);
		*(tab + least) = temp;
		i++;
	}
}
