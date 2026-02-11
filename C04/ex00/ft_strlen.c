/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:59:49 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/11 20:00:29 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	char	*str;
	int	n;

	str = "By the laws of aviation a bee cannot fly"; 
	ft_strlen(str);

	printf("Bee movie: %s\n", str);
	printf("Length: %d\n", n);
}*/
