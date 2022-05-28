/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:00:23 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/10 17:33:15 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len == 0)
		return (1);
	i = 0;
	while (i < len)
	{
		if (32 > str[i] || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
