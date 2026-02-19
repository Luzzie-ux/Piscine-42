/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:26:48 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 12:31:47 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 48;
	while (n1 < 56)
	{
		n2 = 49;
		while (n2 < 57)
		{
			n3 = 50;
			while (n3 < 58)
			{
				ft_putchar(n1);
				ft_putchar(n2);
				ft_putchar(n3);
				n3++;
				ft_putchar(' ');
			}
			n2++;		
		}
		n1++;
	}
	ft_putchar('\n');
	return (0);
}