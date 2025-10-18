#include <stdio.h>

int main(){

    int numero;
    int tabuada;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++){
        tabuada = numero * i;
        printf("%d x %d = %d\n", numero, i, tabuada);
    }

}