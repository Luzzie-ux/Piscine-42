/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:31:59 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/03 14:39:51 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	counter;

	counter = 'a';
	while (counter <= 'z')
	{
		write(1, &counter, 1);
		counter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
