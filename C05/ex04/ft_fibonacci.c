/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:37:57 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/13 12:59:13 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (!(index < 0))
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (0);
}

/*int    main(void)
{
    	int n;
	int i = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("N is: %d\n", n );

	while (i <= n)
	{
		printf("F%d is %d", i, ft_fibonacci(i));
		if (i < n)
			printf(", ");
		i++;
	}
	printf("\n");
}*/