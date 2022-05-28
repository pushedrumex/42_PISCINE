/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:52:17 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/15 16:33:19 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	if (*to_find == 0)
		return (str);
	len = 0;
	while (to_find[len])
		len++;
	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && str[i + j] && to_find[j])
		{
			if (j == len - 1)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
