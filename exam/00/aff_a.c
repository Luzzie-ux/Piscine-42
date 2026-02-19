/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:12:24 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 12:25:55 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		write (1, "a", 1);
	else 
	{
		while (*argv[1])
		{
			if (*argv[1] == 'a')
			{
				write (1, "a", 1);
				break;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}