/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:48:58 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/11 18:08:13 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*char	*ft_strstr(char *str, char *to_find)
{
	int	i;	int	j;
	
	i = 0;	j = 0;
	if(!str || !to_find) 
		return (0);
	if(to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0')
		{
			if(str[i + j] == '\0' || str[i + j] != to_find[j])
			{
				break;
			}
			++j;
		}
		++i;
		if(to_find[j] == '\0') 
			return (&str[i - 1]);
	}
	return (0);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	size_t	i;
	size_t	j;
	size_t	len_a;
	size_t	len_b;

	i = 0;
	j = 0;
	len_a = ft_strlen(str);
	len_b = ft_strlen(to_find);
	if (len_a < len_b)
		return (0);
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j] == str[i])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	char str[] = "Testando testando 123";
	char to_find[] = "tando";

	printf("%s\n", ft_strstr(str, to_find));
}*/
