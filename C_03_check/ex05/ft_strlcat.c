/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:54:43 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/15 16:33:56 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;
	int				temp;

	len_d = 0;
	while (dest[len_d])
		len_d++;
	temp = len_d;
	len_s = 0;
	while (src[len_s])
		len_s++;
	i = 0;
	if (size <= len_d)
		return (size + len_s);
	while (src[i] && (len_d + 1 < size))
	{
		dest[len_d] = src[i];
		i++;
		len_d++;
	}
	dest[len_d] = '\0';
	return (temp + len_s);
}
