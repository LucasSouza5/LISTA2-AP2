#include <stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    float  programacao, praticas;
    char test;
    do{
        printf("\n Digite a nota de programação: ");
        scanf("%f", &programacao);

        printf("\n Digite a nota de práticas: ");
        scanf("%f", &praticas);

        if(programacao > praticas){
            printf("\n A nota maior foi em Programação: ");
        }else{
            printf("\n A nota maior foi em Práticas");
        }
         printf("\n Executar novamente? (S/N): ");
         fflush(stdin);
         scanf("%c", &test);
    }while(test == 's' || test == 'S');
    return 0;
}