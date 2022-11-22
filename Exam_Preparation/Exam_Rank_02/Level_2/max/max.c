int		max(int* tab, unsigned int len)
{
    int max_nb = tab[0];
    int i = 1;

    if(!tab)
    return(0);
    else
    {
        while(i < len)
        {
            if(max_nb < tab[i])
            max_nb = tab[i];
            i++;
        }
    }
    return(max_nb);
}
/*
#include <stdio.h>
int main(void){
    int tab[] = {10, 20, 50, 100, 9999, 11, 2};

    printf("EL NB GRANDE ES: %d", max(tab, 7));
}*/