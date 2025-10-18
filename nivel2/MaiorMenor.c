#include <stdio.h>

int main(){

    int vetor_numeros[10]; //10 elementos

    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor_numeros[i]);
    }

    int maior = vetor_numeros[0]; // inicializando o maior valor com o primeiro valor do vetor
    int menor = vetor_numeros[0];
    
    for(int i = 0; i < 10; i++){
        if (vetor_numeros[i] > maior){
            maior = vetor_numeros[i];
        }else if (vetor_numeros[i] == maior){
            
        }
        else if (vetor_numeros[i] < menor){
            menor = vetor_numeros[i];
        }
        else{

        }
        
    }

    printf("O maior valor digitado foi %d\n", maior);
    printf("O menor valor digitado foi %d\n", menor);

    return 0;
}