#include <stdio.h>

int main(){
    int i, cont[100];
    
    for (i = 100; i > 0; i--){
        cont[i] = i;
    }
    for (i = 100; i > 0; i--){
        printf("%d  ",cont[i]);
    }
    return 0;
}