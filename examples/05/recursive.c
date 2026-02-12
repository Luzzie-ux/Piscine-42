/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:23:11 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/12 14:31:54 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int n = 0;
	int fact = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	fact = factorial(n);

	printf("factorial:%d\n", fact);

	return (0);	
}

int	factorial(int n)
{
	if (n == 1) return 1;

	return n * factorial(n - 1);
}

