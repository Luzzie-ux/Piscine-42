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