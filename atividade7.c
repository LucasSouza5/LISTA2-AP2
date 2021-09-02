#include <stdio.h>

int main(){
    int i, vetor[8], number , j = 0;
    
    for (i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um numero para o codigo encontrar: ");
    scanf("%d", &number);

    for (i = 0; i < 8; i++){
        if (number == vetor[i]){
            printf (" Esse valor esta na posicao %d ", i+1);
        }else{
            j++;
        }
        if ( j == 8){
            printf("Esse numero nao existe");
        }
    }
    return 0;
}