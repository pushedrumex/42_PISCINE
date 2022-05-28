/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:51:32 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/23 21:06:14 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	*temp;

	if (min >= max)
		return (0);
	len = max - min;
	array = (int *)malloc(sizeof(int) * len);
	temp = array;
	while (len > 0)
	{
		*array = min++;
		len--;
		array++;
	}
	return (temp);
}
