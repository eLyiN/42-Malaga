#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char a;

	i = 0;
	a = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if(av[1][i] <= 'Z' && av[1][i] >= 'M')
				a = av[1][i] - 13;
			else if(av[1][i] <= 'z' && av[1][i] >= 'n')
				a = av[1][i] - 13;
			else if (av[1][i] >= 'A' && av[1][i] <= 'N')
				a = av[1][i] + 13;
			else if (av[1][i] >= 'a' && av[1][i] <= 'n')
                                a = av[1][i] + 13;
			else
				a = av[1][i];
			write(1, &a, 1);
		i++;	
		}
	}
	write(1, "\n", 1);
	return (0);
}
