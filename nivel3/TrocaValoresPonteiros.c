#include <stdio.h>

void troca (int *a, int *b){

    * a = 20;
    * b = 30;
    
}

int main(){

    int var1 = 10;
    int var2 = 20;

    printf("O valor inicial das variaveis eh %d e %d\n", var1, var2);
    
    troca(&var1, &var2);
    

    printf("O novo valor das variaveis eh %d %d", var1, var2);

    return 0;
}