/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:36:00 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 12:56:04 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort(int array[], int size)
{
	int	i;
	int	j;
	int	temp;
	
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size -1)
		{
			if (array[j] > array[j + 1]) //change the comparetor, change the order
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	printArray(int array[], int size)
{
	int	i;
	int	a;

	i = 0;
	while (i < size)
	{
		printf("%d ", array[i]);
		i++;
	}
}

int	main(void)
{
	int	array[] = {9,6,2,7,3,8,3,2,8,5,1,4};
	int	size = sizeof(array)/sizeof(array[0]);

	ft_sort(array, size);
	(printArray(array, size));

	return (0);
}