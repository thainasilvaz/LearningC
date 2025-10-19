#include <stdio.h>
#include <stdlib.h>

int main(){

    int n_linhas;
    int n_colunas;
    int **ponteiro; //ponteiro para ponteiro de int, ou seja, um vetor de ponteiros -> cada posição desse vetor vai apontar para uma linha da matriz.
    
    printf("Digite as dimensoes da matriz que sera exibida");
    printf("\nNumero de linhas: ");
    scanf("%d", &n_linhas);
    printf("Numero de colunas: ");
    scanf("%d", &n_colunas);

    ponteiro = (int **)malloc(n_linhas * sizeof(int *)); //alocando memoria para as linhas (vetor de ponteiros) -> cada ponteiro representa uma linha

    //alocando memoria para as colunas de cada linha
    for(int i = 0; i < n_linhas; i++){
        ponteiro[i] = (int *)malloc(n_colunas * sizeof(int));
    }

    printf("\nDigite os valores da matriz %dx%d: \n", n_colunas, n_linhas);
    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &ponteiro[i][j]);
        }
    }


    printf("\nMatriz digitada:\n");
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            printf("%d\t", ponteiro[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < n_linhas; i++) {
        free(ponteiro[i]); //libera cada linha
    }
    free(ponteiro); //libera o vetor de ponteiros

    return 0;

}