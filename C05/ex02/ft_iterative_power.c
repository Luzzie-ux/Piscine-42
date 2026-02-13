/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 09:12:20 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/13 10:13:02 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	math;

	math = 1;
	if (power <= -1)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (power != 0)
	{
		math = (nb * math);
		power--;
	}
	return (math);
}

/*int	main(void)
{
	int n;
	int p;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter a power: ");
	scanf("%d", &p);

	int math = ft_iterative_power(n, p);
	printf("N is: %d\n", n );
	printf("The power chosen is: %d\n", p);
	printf("So %d to the power of %d is: %d\n", n, p, math);
}*/