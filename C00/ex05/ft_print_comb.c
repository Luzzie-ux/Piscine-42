/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:29:43 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/04 15:11:55 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putspc(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_ans(char s, char u, char p)
{
	ft_putchar(s);
	ft_putchar(u);
	ft_putchar(p);
	if (s == '7' && u == '8' && p == '9')
		return ;
	else
		ft_putspc();
}

void	ft_print_comb(void)
{
	char	s;
	char	u;
	char	p;

	s = '0';
	while (s <= '7')
	{
		u = s + 1;
		while (u <= '8')
		{
			p = u + 1;
			while (p <= '9')
			{
				ft_ans(s, u, p);
				p++;
			}
			u++;
		}
		s++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
}*/
