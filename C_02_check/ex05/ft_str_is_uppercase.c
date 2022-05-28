/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:56:03 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/10 15:04:47 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if ('A' > str[i] || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
