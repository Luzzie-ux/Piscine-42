/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:48:58 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/16 18:04:07 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0'
			&& str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char str[] = "Testando testando 123";
	char to_find[] = "";
	char str1 [] = "Estudando muito";
	char to_find1[] = "xyz";
	char str2[] = "A bee shouldnt be able to fly";
	char to_find2[] = "able";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", ft_strstr(str2, to_find2));
	printf("%s\n", ft_strstr(str1, to_find1));
}*/
