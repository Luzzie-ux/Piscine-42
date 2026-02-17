/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 20:03:22 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/17 11:55:02 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	subatoi(char *str, int *i)
{
	int	sign;

	sign = 1;
	while ((str[*i] >= '\t' && str[*i] <= '\r') || str[*i] == ' ')
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = sign * -1;
		(*i)++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = subatoi(str, &i);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (n);
		}
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (n * sign);
}

/*#include <stdio.h>
int main (void)
{
    char    str[] = "12345";
    char    str1[] = "1 2 3 4 5 6 7 8 9 0 a b c";
    char    str2[] = "+-123";
    char    str3[] = "   - 0000";
    char    str4[] = "+abc123";
    int    num;

    num = ft_atoi(str);
    printf("Atoi is: %d", num);
    printf("\nAtoi is: %d", ft_atoi(str1));
    printf("\nAtoi is: %d", ft_atoi(str2));
    printf("\nAtoi is: %d", ft_atoi(str3));
    printf("\nAtoi is: %d", ft_atoi(str4));
    
    return (0);
}*/
