#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av){
	int i = 0;

	if (ac == 4)
	{
	if (!av[2][1] && !av[3][1]){
		while(av[1][i])
		{
		if(av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		write(1, &av[1][i], 1);
		i++;
		}
		
	}
	}
	write(1, "\n", 1);
return(0);
}
