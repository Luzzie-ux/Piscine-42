#include <unistd.h>
/*
int	main(void){
	char	a;
	a = 'a';

	write (1, &a, 1);
}*/

int	main(void){
	write(1, "a", 1);
}
