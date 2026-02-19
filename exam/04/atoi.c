/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:02:14 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 21:20:34 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		num;
	int		sign;
	char	*ptr;

	num = 0;
	sign = 1;
	ptr = str;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
		ptr++;
	if (*ptr == '-' && *ptr == '+')
	{
		if (*ptr == '-')
		{
			sign = -1;
		}
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
        num = num * 10 + (*ptr - '0');
        ptr++;
    } 
    return (num * sign);
}

#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char    str[] = "12345";
    char    str1[] = "1 2 3 4 5 6 7 8 9 0 a b c";
    char    str2[] = "+-123";

    printf("Atoi is: %d", ft_atoi(str));
    printf("\nAtoi is: %d", ft_atoi(str1));
    printf("\nAtoi is: %d", ft_atoi(str2));
	
    return (0);
}