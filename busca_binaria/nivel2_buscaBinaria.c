/*
Adicione verificação: se o vetor não estiver ordenado, o programa deve ordenar antes (use insertion sort ou bubble sort).
*/

#include <stdio.h>

void bubbleSort(int vetor[], int tamanho){

    for(int i = 0; i < tamanho - 2; i++){
        for(int j = 0; j < tamanho - 1 - i; j++){
            if(vetor[j] > vetor[j+1]){
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int buscaBinaria(int vetor[], int tamanho, int alvo){

    for(int i = 0; i <= tamanho - 1; i++){
        if(vetor[i] > vetor[i+1]){
            bubbleSort(vetor, tamanho);
            break;
        }
    }

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

    int vetor[] = {2, 4, 3, 10, 9, 7, 20};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo;

    printf("Digite um numero inteiro para ser procurado no vetor: ");
    scanf("%d", &alvo);

    int resultado = buscaBinaria(vetor, tamanho, alvo);

    if(resultado == -1){
        printf("O elemento %d nao foi encontrado no vetor.\n", alvo);
    }
    else{
        printf("\nVetor ordenado: \n");
        for(int i = 0; i < tamanho; i++){
            printf("%d ", vetor[i]);
        }
        printf("\nO elemento %d foi encontrado na posicao %d do vetor.\n", alvo, resultado);
    }

}