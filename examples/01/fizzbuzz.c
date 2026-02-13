/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:59:40 by rodrpere          #+#    #+#             */
/*   Updated: 2026/02/13 14:00:04 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void fizzBuzz(int n) {
    for (int i = 1; i <= n; ++i) {
        // Check if i is divisible by both 3 and 5
        if (i % 3 == 0 && i % 5 == 0) {
            // Print "FizzBuzz"
            printf("FizzBuzz ");
        } 
        // Check if i is divisible by 3
        else if (i % 3 == 0) {
            // Print "Fizz"
            printf("Fizz ");
        } 
        // Check if i is divisible by 5
        else if (i % 5 == 0) {
            // Print "Buzz"
            printf("Buzz ");
        } 
        else {
            // Print the current number
            printf("%d ", i);
        }
    }
}

int main() {
    int n = 100;
    fizzBuzz(n);
    return 0;
}
