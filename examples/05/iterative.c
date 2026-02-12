/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:19:58 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/12 14:32:18 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int n = 0;
	int fact = 1;
	printf("Enter a Number:");
	scanf("%d\n", &n);

	while (n >= 1)
	{
		fact = n * fact;
		n --;
	}

	printf("factorial: %d\n", fact)

	return 0;
}
