#include <unistd.h>

void ft_print_numbers(void)
{
	char	num;

	num = '9';
	while (num >= '0')
	{
		write(1, &num, 1);
		num--;
	}
}

int	main(void)
{
	ft_print_numbers();
}
