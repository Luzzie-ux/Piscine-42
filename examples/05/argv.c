/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 19:30:46 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/16 19:30:53 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    while (i < argc)
    {
        write(1, "Arg ", 4);
        write(1, &(char){'0' + i}, 1);  // Print index
        write(1, ": ", 2);
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);
        i++;
    }
    
    return (0);
}