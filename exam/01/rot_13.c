/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 21:33:28 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 22:28:45 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rot_13(char str)
{
	if ((str >= 'A' && str <= 'M') ||(str >= 'a' && str <= 'm'))
	{
		str = str + 13;
	}
	else if ((str >= 'N' && str <= 'Z') || (str >= 'n' && str <= 'z'))
	{
		str = str - 13;
	}
	return (str);
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		while (*argv[1])
			ft_putchar(rot_13(*argv[1]++));
	ft_putchar('\n');
	return (0);
}
