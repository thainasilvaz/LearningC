#include <stdio.h>
#include <stdlib.h> //para usar o malloc

/*
obs: A função malloc aloca um espaço de memória e retorna um ponteiro do tipo void para o início do espaço de memória alocado.
*/

int main(){

    int tamanho_vetor;
    int *ponteiro;
    int soma_vetor = 0;

    printf("Digite um numero inteiro para ser o tamanho do vetor: ");
    scanf("%d", &tamanho_vetor);
    printf("\n");

    ponteiro = (int *)malloc(tamanho_vetor * sizeof(int)); //sizeof(int) obtém o tamanho de um inteiro em bytes -> tamanho_vetor * sizeof(int) calcula o total de bytes necessários -> (int*) faz o "cast" para converter o ponteiro void* retornado por malloc para um ponteiro de inteiro


    //verificando se a alocação foi bem sucedida
    if (ponteiro == NULL) { //se a alocação falhar o malloc retorna null
        printf("Erro: Memória não alocada!\n");
        return 1; // indica erro
    }

    for (int i = 0; i < tamanho_vetor; i++){
        printf("Digite o valor inteiro para a posicao %d do vetor: ", i + 1);
        scanf("%d", &ponteiro[i]);
        soma_vetor = soma_vetor + ponteiro[i];
    }

    printf("\nA soma de todos os elementos do vetor eh %d", soma_vetor);


}