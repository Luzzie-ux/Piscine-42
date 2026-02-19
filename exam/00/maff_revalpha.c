/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:56:31 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/19 13:02:53 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_revalpha(void)
{
	char	counter;
	char	temp;

	counter = 'z';
	while (counter >= 'a')
	{
		if (counter % 2 == 0) //for odds change to 1 
		{
			temp = counter - 32;
			write(1, &temp, 1);
		}
		else
		{
			write(1, &counter, 1);
		}
		counter--;
	}
}

int	main(void)
{
	ft_revalpha();
}