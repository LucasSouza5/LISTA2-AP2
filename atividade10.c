#include <stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");
    const int TOTAL = 5;
    int vetor[TOTAL], i, maior, menor, media, abaixomedia = 0;

    for (i = 0; i < TOTAL; i++){
        printf("\n Digite a temperatura do %dº dia: ", i+1);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];
    maior = vetor[0];
    
    for (i = 0; i < TOTAL; i++){
        
        if (menor > vetor [i]){
            menor = vetor[i];
        }
    }
    for (i = 0; i < TOTAL; i++){
        
        if (maior < vetor [i]){
            maior = vetor[i];
        }
    }
    for (i = 0; i < TOTAL; i++){
        
        media = media + vetor[i];
    }
    media = media/TOTAL;

    for (i = 0; i < TOTAL; i++){
        
        if (vetor[i] < media){
            abaixomedia++;
        }
    }
    printf("\n A menor temperatura ocorrida foi: %d°C", menor);
    printf("\n A maior temperatura ocorrida foi: %d°C", maior);
    printf("\n A temperatura média foi: %d°C", media);
    printf("\n O número de dias nos quais a temperatura foi inferior à temperatura média foi: %d", abaixomedia);


    return 0;
}


