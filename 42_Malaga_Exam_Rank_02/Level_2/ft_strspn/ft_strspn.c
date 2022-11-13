#include <string.h>
#include <stdio.h>
#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        
            if(s[i] != accept[i])
            {
                break;
            }
            
        i++;
    }
    if(accept[i] == '\0')
    i++;
    return(i);
}
/* 
int main(void)
{
    char str[] = "This is my world";
    char rts[] = "This is my";


    printf("MY V: %ld\n", ft_strspn(str,rts));
    printf("ORI V %ld\n", strspn(str,rts));
}
*/