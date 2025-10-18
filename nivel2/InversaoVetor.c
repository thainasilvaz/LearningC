#include <stdio.h>

int main(){

    int vetor_numeros[5];

    for(int i = 0; i < 5; i++){
        printf("Digite um numero para adicionar ao vetor: ");
        scanf("%d", &vetor_numeros[i]);
    }


    printf("\nNumeros em ordem inversa:\n");
    for(int i = 4; i >= 0; i--){
        printf("%d\n", vetor_numeros[i]);
    }

    return 0;
}