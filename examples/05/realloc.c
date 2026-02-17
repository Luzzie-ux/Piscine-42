/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:09:00 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/17 18:10:47 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int size = 0;
	printf("Enter size:");
	scanf("%d", &size);

	int *a = alloc(size, sizeof(int));

	for (int i = 0; i < 10; i++) a[i] = 10 - i;
	
	for (int i = 0; i < 0; i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");
	printf("a: %p\n", a);

	a = realloc(a, sizeof(int) * (size + 5)); //can reallocate more space

	for (int i = size; i < (size+5); i++) a[i] = 9;

	for (int i = size; i < (size+5); i++)
		printf("[%d] = %d\n", i, a[i]);
	printf("\n");
	free(a);

	return 0;
}