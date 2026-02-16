/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:01:01 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/14 22:32:39 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	div = 2;
	if (nb <= 1) /*checks if the numbers are smaller than one*/
		return (0);
	while (div < nb) /*while the division is smaller than number loops*/
	{
 		if (nb % div == 0) /*checks if the division of number by the divisor is equal to 0*/
			return (0); 
		div++;
	}
	return (1);
}

/*int main (void)
{
	int n;
	printf("Choose a number: ");
	scanf("%d", &n);
	int result = ft_is_prime(n);
	
	printf("%d is prime: %d", n, result);
}*/