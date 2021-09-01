#include <stdio.h>

int main(){
    int i, a[5] = {5,3,8,4,6}, b[5] = {64,8,12,3,0}, c[5];
    
    for (i = 0; i < 5; i++){
        c[i] = a[i] + b[i];
    }
    for (i = 0; i < 5; i++){
        printf ("%d ", c[i]);
    }
    return 0;
}