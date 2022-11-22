char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char temp;

    while(str[i])
    i++;
    i--;
    while(j < i)
    {
        temp = str[i];

        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
    return(str);
}


#include <stdio.h>
int main(void)
{
    char str[] = "Hello World!!";
    char *str1;

    str1 = ft_strrev(str);
    
    printf("THIS STR: %s\n", str1);

}
