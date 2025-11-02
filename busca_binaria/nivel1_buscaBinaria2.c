/*
2. Gere um vetor ordenado de 10 números e peça ao usuário um número para procurar com busca binária.
*/

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int alvo){

    int inicio = 0;
    int fim = tamanho - 1;

    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        if(vetor[meio] == alvo){
            return meio;
        }
        else if(vetor[meio] < alvo){
            inicio = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }

    return -1;

}

int main(){

    int vetor[] = {3, 5, 7, 10, 22, 45, 58, 60, 79, 82};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo;

    printf("Digite um numero inteiro para ser procurado no vetor: ");
    scanf("%d", &alvo);

    int resultado = buscaBinaria(vetor, tamanho, alvo);

    if(resultado == -1){
        printf("O elemento %d nao foi encontrado no vetor.\n", alvo);
    }
    else{
        printf("O elemento %d foi encontrado na posicao %d do vetor.\n", alvo, resultado);
    }

}