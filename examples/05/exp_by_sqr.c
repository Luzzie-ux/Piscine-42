/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exp_by_sqr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 10:43:24 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/13 11:27:40 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	exp_by_sqr(int x, int n) // will break if it the n is bigger than 32
{
	if (n < 0)
		return (exp_by_sqr(1 / x, -n)); // for 0 and negative exps
	else if (n == 0)
		return (1);
	else if (n % 2 == 0) // will check the remainder to see if its even
		return (exp_by_sqr(x * x, n / 2));
	else if (n % 2 != 0) // will checl the remainder to see if its odd
		return (x * exp_by_sqr(x * x, (n -1) / 2));
	return (0);
}

int	main(void)
{
	int n;
	int p;

	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter a power: ");
	scanf("%d", &p);

	int math = exp_by_sqr(n, p); // or if math is bigger than the max int size
	printf("N is: %d\n", n );
	printf("The power chosen is: %d\n", p);
	printf("So %d to the power of %d is: %d\n", n, p,math);
}