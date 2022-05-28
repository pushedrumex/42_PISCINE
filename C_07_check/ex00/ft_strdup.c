/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:50:58 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/23 21:05:49 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	char	*temp;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	temp = dup;
	while (*src)
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = 0;
	return (temp);
}
