/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 08:27:52 by minjukim          #+#    #+#             */
/*   Updated: 2022/02/17 11:28:41 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		least;
	char	*temp;

	i = 0;
	while (argv[++i] && argc)
	{
		least = i;
		j = i + 1;
		while (argv[j])
		{
			k = 0;
			while (argv[least][k] == argv[j][k])
				k++;
			if (argv[least][k] > argv[j][k])
				least = j;
			j++;
		}
		print(argv[least]);
		temp = argv[least];
		argv[least] = argv[i];
		argv[i] = temp;
	}
}
