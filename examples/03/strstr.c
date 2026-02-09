/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:09:02 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 14:29:07 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char haystack[] = "This is the way";
	char needle[] = "the";

	char *the = strstr(haystack, needle);

	printf("the: %s\n", the);

	char now[] = "now";

	char *fail = strstr(haystack, now);
	if (fail == NULL)
		printf("failed to find string!\n");
}

/*
the strstr function works by looking for a string inside a string
exactly as how it is to look for a needle inside a haystack, hard but exist

*/