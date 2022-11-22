#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int nb_1 = 0;
    int nb_2 = 0;

    if(ac == 4)
    {
        nb_1 = atoi(av[1]);
        nb_2 = atoi(av[3]);
        if(!nb_1 || !nb_2)
        {
            write(1, "\n", 1);
            return(1);
        }
        else if(av[2][0] == '*')
        printf("%d\n", (nb_1 * nb_2));
        else if(av[2][0] == '+')
        printf("%d\n", (nb_1 + nb_2));
        else if(av[2][0] == '-')
        printf("%d\n", (nb_1 - nb_2));
        else if(av[2][0] == '/')
        printf("%d\n", (nb_1 / nb_2));
        else if(av[2][0] == '%')
        printf("%d\n", (nb_1 % nb_2));
    }
}
