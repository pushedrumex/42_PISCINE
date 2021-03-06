/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:01:09 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/10 13:16:26 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	len;
	int	n;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	n = 0;
	while (n < len + 1)
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
