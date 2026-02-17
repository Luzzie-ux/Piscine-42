/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:20:15 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/17 15:34:23 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(void) //function that will request a block of memory on the heap
{
	//since we dont know, we allocate space for 10 ints
	int *a = malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++) a[i] = 10 - i;
	
	for (int i = 0; i < 0; i++)
		printf("a[%d] = %d\n", i, a[i]);
	printf("\n");

	printf("a: %p\n", a);
	return 0;

	//we have to remember to free the space after using a malloc
	free(a);
}

/*its good to remember memory leaks happens if we forget to free the space,
if the heaps fulls since we requested all the memory it could give*/