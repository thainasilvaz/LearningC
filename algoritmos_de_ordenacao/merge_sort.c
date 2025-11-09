#include <stdio.h>

// Função para intercalar (mesclar) duas metades já ordenadas
void merge(int v[], int inicio, int meio, int fim) {
    int i = inicio; //percorre a metade esquerda
    int j = meio + 1; //percorre a metade direita
    int k = 0; //índice do vetor temporario
    int temp[fim - inicio + 1]; // vetor temporário local -> espaço para armazenar a fusão

    while (i <= meio && j <= fim) {
        if (v[i] <= v[j]) { //pega da esquerda
            temp[k++] = v[i++];
        } else { //pega da direita
            temp[k++] = v[j++];
        }
    }

    // Copia o que sobrou da primeira metade (se sobrou algo)
    while (i <= meio) {
        temp[k++] = v[i++];
    }

    // Copia o que sobrou da segunda metade (se sobrou algo)
    while (j <= fim) {
        temp[k++] = v[j++];
    }

    // Copia de volta para o vetor original
    for (i = inicio, k = 0; i <= fim; i++, k++) {
        v[i] = temp[k];
    }
}

// Função recursiva principal
void mergeSort(int v[], int inicio, int fim) { //início e fim são índices
    if (inicio < fim) { //garante que só dividimos quando há pelo menos 2 elementos

        int meio = (inicio + fim) / 2; //divisão

        mergeSort(v, inicio, meio); //conquista (ordena metade esquerda)
        mergeSort(v, meio + 1, fim); //conquista (ordena metade direita)
        merge(v, inicio, meio, fim); //combinação (intercala entre as duas metades)
    }
}

int main() {
    int v[] = {5, 2, 4, 7, 1, 3, 2, 6};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Vetor original: ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    mergeSort(v, 0, n - 1);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");

    return 0;
}
