#include <unistd.h>

int	main(int limit, char **lastStr){
	if(limit > 1)
		while(*lastStr[limit - 1])
			write(1, lastStr[limit - 1]++, 1);
	write(1, "\n", 1);
	return(0);
}
