#include <unistd.h>

int	ft_check_double(char *p, int i){
	for(int j = 0; j < i; j++){
		if(p[j] == p[i])
		return(1);
	}
	return(0);
}

int main(int ac , char **av){
	for(int i = 0; av[1][i]; i++){
		if(i > 0 && !ft_check_double(av[1], i))
			write(1, &av[1][i], 1);
	}
		for(int i = 0; av[2][i]; i++){
		if(i > 0 && !ft_check_double(av[1], i))
			write(1, &av[2][i], 1);
	}
}