/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:49:03 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/16 11:10:06 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= dlen)
		return (size + slen);
	if (!dest || !src)
		return (dlen);
	i = 0;
	while (i < size - dlen - 1 && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[10] = "Hello";
	char	s2[] = "World";
	unsigned int result = ft_strlcat(s1, s2, 7);

	printf ("\nconcatenating empty src with\ns1: %s\ns2: %s\n\n", s1, s2);
	printf ("Result: %u\n", result);

	return (0);
}*/