/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:15:45 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 14:56:10 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/*
strcmp returns values by comparing one to string to another
to see if they share the same ascii value
*/

int main(void)
{
	char s1[] = "this is the way.";
	char s2[] = "this is the way.";
	char s3[] = "this is not the way.";
	char s4[] = "maybe this is the way.";

	
	//if (s1 == s2) printf("Equal\n");
	//else printf ("Not equal");
	
	/*
	this doesnt work because since we are comparing the variable
	we arent comparing the str but their adress, and those 
	are never the same
	*/

	if (strcmp(s1,s2) == 0) //if the strings are equal, returns 0.
		printf("Strings are equal\n");
	if (strcmp(s1,s3) != 0) //if the strings are not equal and the first one is lower, returns >0.
		printf("Strings are not equal\n");
	if (strcmp(s4,s2) != 0) //if the strings are not equal and the first one is higher, returns <0.
		printf("Strings are not equal\n");
}
