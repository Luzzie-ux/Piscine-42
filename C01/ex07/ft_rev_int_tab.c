/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 10:04:47 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 12:40:33 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	tab[] = {1,2,4,5,6,7,8,9};
	ft_rev_int_tab(tab, 9);
	for(int i = 0; i < 9; i++)
		printf("tab[%d] = %d\n", i, tab[i]);
	return (0);
}
*/