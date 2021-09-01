#include <stdio.h>

int main(){
    int i, cont[5];
    
    for (i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &cont[i]);
    }
    return 0;
}