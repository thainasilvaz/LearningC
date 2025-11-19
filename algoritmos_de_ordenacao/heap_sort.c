#include <stdio.h>

void refazHeapMax(int vetor[], int i, int compHeap){ //compara o elemento atual com seus filhos e, se necessário, realiza trocas para garantir que o maior elemento esteja na posição correta -> pais maiores ou iguais que filhos (heap maximo)

    //calculando índices do filhos
    int esquerda = 2 * i + 1; 
    int direita = 2 * i + 2;
    //índice do filho maior (começamos supondo que o maior elemento está na raiz)
    int maior = i; 

    if (esquerda < compHeap && vetor[esquerda] > vetor[maior]) //se o índice do filho está dentro do heap e se o valor do filho é maior que o do pai
        maior = esquerda;
    if (direita < compHeap && vetor[direita] > vetor[maior])
        maior = direita;

    if (maior != i) { //se o maior NÃO for o pai, troca

        // trocando A[i] com A[maior] (maior elemento sobe para o topo da subárvore)
        int temp = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temp;

        // corrige recursivamente na subárvore onde o elemento afundou
        refazHeapMax(vetor, maior, compHeap);
    }
}

void constroiHeapMax(int vetor[], int tamanho_vetor){ //transforma um vetor arbitrário em um heap máximo

    for (int i = tamanho_vetor/2 - 1; i >= 0; i--) {
        refazHeapMax(vetor, i, tamanho_vetor);
    }

}

void heapSort(int vetor[], int tamanho_vetor) {

    constroiHeapMax(vetor, tamanho_vetor); //transforma o array em um heap máximo completo

    for (int i = tamanho_vetor - 1; i > 0; i--) { //extrai elementos um por um do heap
        // troca a raiz (maior elemento) com o último elemento
        int temp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temp;

        // restaura o heap com tamanho reduzido
        refazHeapMax(vetor, 0, i);
    }
}

int main(){
    
    int vetor[] = {5, 13, 2, 25, 7, 17, 20, 8, 4};
    int tamanho_vetor = sizeof(vetor) / sizeof(tamanho_vetor);

    printf("Vetor original: \n");
    for (int i = 0; i < tamanho_vetor; i++) printf("%d ", vetor[i]);
    printf("\n");

    heapSort(vetor, tamanho_vetor);

    printf("Vetor ordenado: \n");
    for (int i = 0; i < tamanho_vetor; i++) printf("%d ", vetor[i]);
    printf("\n");

    return 0;
}