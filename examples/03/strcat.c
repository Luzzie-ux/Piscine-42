/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:13:58 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 15:21:57 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[20] = "This and";
	char src [5] = "that";

	strcat(dest, src);

	char *ptr = strcat(dest, src);

	printf("dest: %S\n", dest);
	printf("ptr: %s\n", ptr);

	printf("dest: %p\n", dest);
	printf("ptr: %p\n", ptr);

	/*
	the reason we have both ptr and dest in there is because dest and ptr i this function are almost the same thing
	they both return the same string and have the exact adress value of one another.
	so dest can be easily changed for another pointer and it will be the same thing
	*/
}