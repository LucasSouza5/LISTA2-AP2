#include <stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    

    double number1 = 0, number2 = 1, result = 0, quant, i;

    for ( i = 0; i < 50; i++ ){

        result = number1 + number2;
        
        printf("%.0lf,  ", result);
        number2 = number1;
        number1 = result;
    }
    return 0;
}