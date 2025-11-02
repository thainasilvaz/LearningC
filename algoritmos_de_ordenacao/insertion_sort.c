#include <stdio.h>

/*
o Insertion Sort percorre o vetor da esquerda para a direita, e para cada posição i, ele insere o elemento vetor[i] na posição correto dentro da parte anterior do vetor (que já está ordenada)
*/

void insertionSort(int vetor[], int tamanho){

    for(int i = 1; i < tamanho; i++){ //começa com 1 pois considera-se que o primeiro elemento já está ordenado
        int chave = vetor[i]; //a variavel chave guarda o elemento atual -> o que será inserido no lugar certo
        int j = i - 1; //variavel para percorrer a parte anterior do vetor (que já está ordenada) -> se i = 1, j = 0

        while(j >= 0 && vetor[j] > chave){ //se ainda houver elementos à esquerda (evita índices negativos) e enquanto o elemento da esquerda for maior que a chave
            vetor[j+1] = vetor[j];
            j--;
        }

        vetor[j+1] = chave;
    }
}

int main(){

    int vetor[] = {5, 2, 4, 6, 1, 3};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    insertionSort(vetor, tamanho);

    printf("Vetor ordenado: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;

}