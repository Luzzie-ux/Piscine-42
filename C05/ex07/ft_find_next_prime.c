/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:18:20 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/16 11:46:11 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb) //first it will check if the number given is prime
{
	int	div;

	div = 2;
	if (nb <= 1)
		return (0);
	while (div < nb)
	{
		if (nb % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int ft_find_next_prime(int nb) //then it will give the closest prime to the number given
{
	int	i;

	i = 0;
	if (nb <= 2)
		return (2); //closest prime
	
	while (i < 2 * nb)
	{
		if (ft_is_prime(nb))
		return(nb);
		nb++;
	}
	return (nb + i);
}


/*int main (void)
{
	int n;
	printf("Choose a number: ");
	scanf("%d", &n);
	int result = ft_find_next_prime(n);
	
	printf("Closests prime is : %d", result);
}*/