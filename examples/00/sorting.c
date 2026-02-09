/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:46:26 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 12:57:25 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	sort(int array[], int size)
{
	for(int i = 0; i < size - 1; i++)
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(array[j] < array[j+1]) // if(array[j] > array[j+1]) //ascending order
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;

			}

		}
	}
}

void	printArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}

int	main(void)
{
	int array[] = {9,2,3,6,5,8,7,4,1};
	int size = sizeof(array)/sizeof(array[0]);

	sort(array, size);
	printArray(array, size);

	return (0);
}