/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:33:24 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/04 10:08:06 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);
{
	write(1, &c, 1);
}

void    ft_print_comb(void);
{
    int a;
    int b;
    int	c;

    a = 0;
    while(a <= 7)
    {
	    b = a + 1;
	    while(b <= 8)
	    {
			c = a + 1;
			while(c <= 9)
			{
				putchar('0');
			}
			c++;
	    }
		b++;
    }
	a++;
}
return(0);
