/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:49:03 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/11 18:10:35 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = ft_strlen(dest);
	if (!src || !*src)
		return (dlen);
	while (i < size - dlen - 1 && src[i])
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = 0;
	return (i + dlen);
}

/*#include <stdio.h>
#define MAXS 32

int	main(int argc, char **argv)
{
	size_t n = 0, sz1 = 0;   
    char str[MAXS] = "",
        *s1 = argc > 1 ? argv[1] : "hello",    
        *s2 = argc > 2 ? argv[2] : "world";    

    printf ("\nconcatenating empty src with\ns1: %s\ns2: %s\n\n", s1, s2);

    sz1 = ft_strlcat (str, s1, MAXS);   
    printf ("after 'strlcat (str, s1, n)', str : %s  (%zu chars)\n", str, sz1);

    n = ft_strlcat (str, s2, MAXS);       
    printf ("after 'strlcat (str, s2, n)', str : %s  (%zu chars)\n", str, n);

    return 0;
} */