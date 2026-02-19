/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:47:51 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 15:53:42 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

#include <stdio.h>
#include <string.h>
int	main (void)
{
	char	s1[] = "Luzzie";
	char	s2[] = "Rodrigo";
	char	s3[] = "Nerevar";
	char	s4[] = "Voryn";

	printf("%s\n", s1);
	ft_strcpy(s1,s2);
	printf("%s\n", s1);
	
	printf("%s\n", s3);
        strcpy(s3,s4);
        printf("%s\n", s3);

	return (0);
}