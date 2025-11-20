#include <stdio.h>

int particao(int A[], int p, int r) { //método lomuto (o pivô é o último elemento) -> p é o índice inicial do subvetor e r é o índice final do subvetor
    int x = A[r]; //pivô é o último elemento
    int i = p - 1; //marca a fronteira da região de elementos menores que o pivô

    for (int j = p; j < r; j++) { //percorre todos os elementos do subvetor menos o pivô -> j é o índice do elemento atual
        if (A[j] <= x) { //se o elemento atual é menor ou igual ao pivô, ele deve ficar na região esquerda
            i++;
            //troca de A[i] com A[j]
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }

    //troca A[i+1] com A[r] (pivô). Isso coloca o pivô na posição i+1, que é sua posição final no subvetor particionado.
    int tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;

    return i + 1; //retorna o índice final do pivô. Esse índice separa as duas sublistas para as chamadas recursivas do QuickSort
}

void quicksort(int A[], int p, int r) { //QuickSort recursivo que ordena A[p..r]
    if (p < r) { //caso base -> se p >= r o subvetor tem 0 ou 1 elemento e já está ordenado
        int q = particao(A, p, r); // posição final do pivô
        quicksort(A, p, q - 1);    // ordena a parte esquerda
        quicksort(A, q + 1, r);    // ordena a parte direita direita
    }
}

int main() {
    int A[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(A)/sizeof(A[0]);

    printf("Vetor desordenado: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    quicksort(A, 0, n - 1); //p = 0 e r = n - 1 (primeiro e último índice)

    printf("\nVetor ordenado: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
}
