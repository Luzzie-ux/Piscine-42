/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 11:29:30 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/17 14:10:14 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if ((base[i] >= 9 && base[i] <= 13) || (base[i] >= 32 && base[i] <= 45))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	breakdown(long n, char *base, int blen)
{
	if (n >= blen)
	{
		breakdown(n / blen, base, blen);
		breakdown(n % blen, base, blen);
	}
	else
		ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	long	blen;

	blen = ft_strlen(base);
	if (!base || !check(base))
		return ;
	else if (blen < 2)
		return ;
	else if (nbr < 0)
	{
		ft_putchar('-');
		n = -(long)nbr;
	}
	else
	{
		n = (long)nbr;
	}
	breakdown(n, base, blen);
}
