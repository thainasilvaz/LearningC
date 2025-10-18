#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("O numero %d eh par.", numero);
    } else {
        printf("O numero %d eh impar.", numero);
    }
}