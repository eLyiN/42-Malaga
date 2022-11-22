int    ft_strcmp(char *s1, char *s2)
{
    while(*s1 && *s2)
    {
        if(*s1 == *s2){
            s1++;
            s2++;
        }
    }
    return(*s1 - *s2);
}
/*

#include <stdio.h>

int main(void)
{
    char str[] = "HOLA WORLD";
    char str1[] = "HOLA WORLDI";

    int result = ft_strcmp(str, str1);
    printf("EL RESULTADO ES: %d\n", result);
}
*/