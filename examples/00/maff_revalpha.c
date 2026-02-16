/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:58:53 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/16 20:09:04 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(void)
{
        char    counter;

        counter = 'z';
        while (counter >= 'a')
        {
                if (counter % 2 == 1)
                {
                        char    temp;

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