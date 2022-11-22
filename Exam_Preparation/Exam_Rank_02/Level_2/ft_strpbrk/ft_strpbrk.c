char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;

    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            return((char *)s1 + i);
            j++;
        }
        i++;
    }
    return(0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char s1[] = "EHEHLACONCHAWEI";
    char s2[] = "12345";

    printf("MY RETURN: %s\n", ft_strpbrk(s1, s2));
    printf("THE ORI RETURN: %s\n", strpbrk(s1, s2));
}
*/