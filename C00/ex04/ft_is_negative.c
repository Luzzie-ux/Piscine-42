/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:40:26 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/03 14:53:57 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_is_negative(int n)
{
	char	num;

	if (n >= 0)
	{
		num = 'P';
		write (1, &num, 1);
	}
	else
	{
		num = 'N';
		write(1, &num, 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(42);
}*/
