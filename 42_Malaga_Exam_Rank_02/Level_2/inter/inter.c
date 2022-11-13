#include <unistd.h>

int ft_double(char *str, int i)
{
    int j = 0;

    if(i > j)
    {
        while(j < i)
        {
            if(str[j] == str[i])
            return(-1);
            j++;
        }
    }
    return(0);
}

int main(int ac, char **av)
{
    int i = 0;
    char *to_find = av[1];
    char *str = av[2];
    if(ac == 3)
    {
        while(to_find[i])
        {   
            for(int k = 0; str[k]; k++)
            {
                if(to_find[i] == str[k] && ft_double(to_find, i) == 0)
                {
                    write(1, &to_find[i], 1);
                    break;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
}