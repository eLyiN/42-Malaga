#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    char *s = av[1];

    if (ac == 2)
    {
        while(s[i])
        {
            if(s[i] >= 'A' && s[i] <= 'Z' && i != 0)
            {
                write(1, "_", 1);
                s[i] = s[i] + 32;
            }
            write(1, &s[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
