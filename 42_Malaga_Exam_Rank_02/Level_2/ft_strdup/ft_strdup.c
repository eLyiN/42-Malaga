#include <stdlib.h>

char    *ft_strdup(char *src)
{
    size_t i = 0;
    char *str;

    while(src[i])
        i++;
    str = malloc(sizeof(char) * i + 1);
    i = 0;
    while(src[i])
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}