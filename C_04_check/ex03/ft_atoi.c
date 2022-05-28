/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <minjukim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:13:02 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/16 16:37:56 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	m;
	int	num;

	num = 0;
	m = 0;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m++;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num = num * 10 + *str - '0';
		if (!(*(str + 1) >= '0' && *(str + 1) <= '9'))
		{
			if (m % 2 == 1)
				num = num * (-1);
			return (num);
		}
		str++;
	}
	return (0);
}
