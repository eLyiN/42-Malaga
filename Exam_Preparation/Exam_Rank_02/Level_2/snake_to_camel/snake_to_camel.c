#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av){
    char *result;
    int j = 0;

    for(int i = 0; av[1][i]; i++){
        result = realloc(result, i);
        if(av[1][i] == '_'){
            
            result[j++] = av[1][i+1] - 32;
            i++;
        }
        else
        result[j++] = av[1][i];
    }
    for(int i = 0; result[i]; i++){
        write(1, &result[i], 1);
    }
    free(result);
    write(1, "\n", 1);
}
