/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:51:22 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 18:44:30 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the idea behind this function is to make a copy of what is one strong to another,
// to understand how exactly the function strcpy works for real 
char	*ft_strcpy(char *dest, char *src) //step by step way of making a strcpy
{
	char *start = dest; // the start adress is saved on the destination 

	while (*src != '\0') // until we hit source being NULL, keep the loop running
	{
		*dest = *src; //takes the char on src and copies into the memory pointed bydest
		dest++; // moves the dest pointer forward
		src++; // moves the src pointer forward
	}
	*dest = '\0'; //marks the dest as null when the while loop ends

	return start; //returns the starting destination address
}

