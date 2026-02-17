/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:55:46 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/17 16:06:29 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(void) //calloc and malloc work the same 
{
	//the main difference is that the memory was already zero there
	int *a = calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++) a[i] = 10 - i;
	
	for (int i = 0; i < 0; i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");
	printf("a: %p\n", a);

	int *save = a;
	free(a);
		printf("save: %p\n", save);
	for (int i = 0; i < 0; i++)
		printf("save[%d] = %d\n", i, save[i]);
	printf("\n");

	return 0;
}
/*If we have a long running program, calloc might be more useful*/
/*because malloc doesnt set it zero, but calloc does*/