/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:47:51 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/16 20:10:03 by rodrpere         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;
	int	vlen;

	i = argc - 1;
	while (i > 0)
	{
		vlen = ft_strlen(argv[i]);
		write(1, argv[i], vlen);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
