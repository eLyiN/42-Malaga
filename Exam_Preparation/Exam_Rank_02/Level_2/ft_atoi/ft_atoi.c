int     ft_atoi(const char *str)
{
        int nb = 0;
        int signo = 1;
        int i = 0;

        while(str[i] >= 8 && str[i] <= 13)
                i++;
        if(str[i] < 48 || str[i] > 57 || str[i] != '-')
                return (0);
        while(str[i])
        {
                if(str[i] == '-')
                {
                        signo *= -1;
                        i++;
                }
                if(str[i] >= 48 && str[i] <= 57)
                nb = nb * 10 + (str[i] - 48);
        i++;
        }
        return (nb * signo);
}
/*
#include <stdio.h>

int main (void)
{
        char str[] = "OH ! 13268!";

        printf("en int es %d", ft_atoi(str));
}*/