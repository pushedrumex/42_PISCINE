/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonheo <jeonheo@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:08:02 by jeonheo           #+#    #+#             */
/*   Updated: 2022/02/23 21:19:07 by minjukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	main(void)
{
	write(1, "\n", 1);
	write(1, "Hello, Nice to meet you !", 24);
	write(1, "\n", 1);
    write(1, "We are jeonheo team !", 21);
    write(1, "\n", 1);
	write(1, "We were so busy that we couldn't do BSQ ! I'm Sorry. But I love U", 64);
	write(1, "\n", 1);
    write(1, "\n", 1);

	int	i,j;

    for( i = 4 ; i < 10; i +=2 )
	{
        for( j = 0; j <= (10 - i); j++ ){printf(" ");}
        for( j = 0; j <= i * 2; j++ ){printf("*");}
        for( j = 0; j <= (10 - i) * 2; j++ ){printf(" ");}
        for( j = 0; j <= i * 2; j++ ){printf("*");}
        printf("\n");
    }
    for( i = 20; i >= 0; i -= 2 )
	{
        for( j = 0;  j <= 20 - i; j++ ){ printf(" ");}
        for( j = 0; j <= i * 2; j++ ){printf("*");}
        printf("\n");
    }
	write(1, "\n", 1);
    return 0;
}
