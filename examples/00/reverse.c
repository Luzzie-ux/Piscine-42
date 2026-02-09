/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:03:55 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 11:22:43 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	reverse(int array[], int length)
{
	int	temp = 0;

	for (int i = 0; i < (length / 2); i++)
	{
		temp = array[i];
		array[i] =  array[length - i - 1];
		array[length - i - 1] = temp;
	}
}

int	main(void)
{
	int	myArray1[]= {1,2,3,4,5,6,7,8,9};
	int	myArray2[]= {6,5,4,3,2,1};

	reverse(myArray1, 9);
	reverse(myArray2, 6);
	/*int	temp = 0;

	for (int i = 0; i < (length / 2); i++)
	{
		temp = myArray[i];
		myArray[i] =  myArray[length - i - 1];
		myArray[length - i - 1] = temp;
	}*/

	for (int i = 0; i < 9; i++)
		printf("myArray1[%d] = %d\n",
			i, myArray1[i]);

	for (int i = 0; i < 6; i++)
		printf("myArray2[%d] = %d\n",
			i, myArray2[i]);

	return (0);
}
