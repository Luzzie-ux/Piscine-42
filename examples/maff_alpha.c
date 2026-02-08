#include <unistd.h>
/* 
int	main(void){
	char	alpha;

	alpha = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	write(1, &alpha, 1)
}
*/
int	main(void)
{
	char 	counter;

        counter = 'a';
        while (counter <= 'z')
	{
		if (counter % 2 == 0)
		{
			write(1, &counter, 1);
		}
		else
		{	char	temp;
			temp = counter + 32;
			write(1, &temp, 1);
		}
		counter--;
        }	
}
