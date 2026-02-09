/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:24:02 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 11:39:03 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	array_add(int array[])
{
	array[0] = array[0] + 1;
}

int	main(void)
{
	int myarray[5] = {1,2,3,4,5};
	array_add(myarray);
	printf("myarray[0]: %d\n", myarray[0]);

	printf("myarray: %p\n", myarray);

	return 0;
}