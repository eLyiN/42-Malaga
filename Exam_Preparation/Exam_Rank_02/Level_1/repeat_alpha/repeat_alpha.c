#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int i;
	int times;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			times = 0;
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				times = av[1][i] - 'A' + 1;
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				times = av[1][i] - 'a' + 1;
			 if (times > 0){
			while(times != 0){
				write(1, &av[1][i], 1);
				times--;}}
			else
			write(1, &av[1][i], 1);	
			
		i++;
		}	
	}
write(1, "\n", 1);
return(0);
}

