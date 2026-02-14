/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:55:08 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/14 13:37:13 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	binary_search(int arr[], int n, int x)
{
	int low = 0;
	int high = n-1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] == x) //Check if X is present at mid
			return	(mid);
		if (arr[mid] < x) //if X is greater, ignore the left half
			low = mid + 1;
		else //if X is smaller, ignore right else
			high = mid - 1;
	}
	return (-1); //if reach here element is not present (shouldnt if element is in arr)
}

/*int	main(void) //fixed main
{
	int arr[] = {2,3,4,10,12,13,14};
	int x = 10;
	int n = sizeof(arr) / sizeof (arr[0]);
	int result = binary_search(arr, n, x);
	if (result == -1)
		printf("Element is not present in array");
	else 
		printf("Element is present at index %d", result);
}*/

int main(void) //dynamic main
{
	int n, x, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d sorted elements:\n", n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]); //only read int separeted by whitespaces
		i++;
	}	
	printf ("Enter the element to search: ");
	scanf("%d", &x);
	int result = binary_search(arr, n, x);
	if (result == -1)
		printf("Element is not present in array");
	else 
		printf("Element is present at index %d", result);
}
