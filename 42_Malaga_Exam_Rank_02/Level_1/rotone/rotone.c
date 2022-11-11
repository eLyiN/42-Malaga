#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	char *str;

	i = 0;
	str = av[1];
	if(ac == 2){
	while(str[i] != '\0'){
		if(str[i] >= 65 && str[i] <= 89)
			str[i] = str[i] + 1;
		else if (str[i] >= 97 && str[i] <= 121)
			str[i] = str[i] + 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] = str[i] - 25;
			write(1, &str[i], 1);
		i++;
	}
	}
write(1,"\n",1);
return(0);
}
