#include <stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float  programacao, praticas;
    char test;
    do{
        printf("\n Digite a nota de programa��o: ");
        scanf("%f", &programacao);

        printf("\n Digite a nota de pr�ticas: ");
        scanf("%f", &praticas);

        if(programacao > praticas){
            printf("\n A nota maior foi em Programa��o: ");
        }else{
            printf("\n A nota maior foi em Pr�ticas");
        }
         printf("\n Executar novamente? (S/N): ");
         fflush(stdin);
         scanf("%c", &test);
    }while(test == 's' || test == 'S');
    return 0;
}