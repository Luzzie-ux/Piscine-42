#include <stdio.h>

int main(void){

    int num1, num2, num3;
    /*ASCII code for 0*/
    num1 = 48;

    while (num1 < 56)
    {
        num2=49;

        while (num2 < 57)
        {
            num3=50;

            while (num3 <58)
            {
                putchar(num1);
                putchar(num2);
                putchar(num3);
                num3++;
                putchar(' ');
            }
            
            num2++;
        }
        
        num1++;
    }
    putchar('\n');
    return (0);
}