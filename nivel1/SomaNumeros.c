#include <stdio.h>

int main(){

    int qnt_numeros;
    int numero_somar;
    int soma = 0;

    printf("Digite quantos numeros deseja somar: ");
    scanf("%d", &qnt_numeros);

    for(int i = 1; i <= qnt_numeros; i++){

        printf("Digite um numero: ");
        scanf("%d", &numero_somar);
        soma = soma + numero_somar;

    }

    printf("A soma de todos os numeros digitados eh %d", soma);
    
}