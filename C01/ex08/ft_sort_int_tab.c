/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:41:32 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/09 13:45:26 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size -1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
void	printArray(int *tab, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
}

int	main(void)
{
	int array[] = {1,914,9,6035,24,7,83,8};
	int size = sizeof(array)/sizeof(array[0]);

	ft_sort_int_tab(array, size);
	printArray(array, size);

	return (0);
}*/
