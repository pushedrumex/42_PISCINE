/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:49:37 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/10 14:54:13 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if ('a' > str[i] || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
