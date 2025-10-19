#include <stdio.h>
#include <stdlib.h>

int main(){

    int n_linhas;
    int n_colunas;
    int **ponteiro1; //ponteiro para ponteiro de int, ou seja, um vetor de ponteiros -> cada posição desse vetor vai apontar para uma linha da matriz.
    int **ponteiro2;
    
    printf("Digite as dimensoes das matrizes que serao somadas");
    printf("\nNumero de linhas: ");
    scanf("%d", &n_linhas);
    printf("Numero de colunas: ");
    scanf("%d", &n_colunas);

    ponteiro1 = (int **)malloc(n_linhas * sizeof(int *)); //alocando memoria para as linhas (vetor de ponteiros) -> cada ponteiro representa uma linha
    ponteiro2 = (int **)malloc(n_linhas * sizeof(int *)); //alocando memoria para as linhas (vetor de ponteiros) -> cada ponteiro representa uma linha

    //alocando memoria para as colunas de cada linha
    for(int i = 0; i < n_linhas; i++){
        ponteiro1[i] = (int *)malloc(n_colunas * sizeof(int));
    }

    for(int i = 0; i < n_linhas; i++){
        ponteiro2[i] = (int *)malloc(n_colunas * sizeof(int));
    }

    printf("\nDigite os valores da matriz %dx%d 1: \n", n_colunas, n_linhas);
    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &ponteiro1[i][j]);
        }
    }

    printf("\nDigite os valores da matriz %dx%d 2: \n", n_colunas, n_linhas);
    for(int i = 0; i < n_linhas; i++){
        for(int j = 0; j < n_colunas; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &ponteiro2[i][j]);
        }
    }


    int matriz_soma[n_linhas][n_colunas];

    printf("\nMatriz soma:\n");
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            matriz_soma[i][j] = ponteiro1[i][j] + ponteiro2[i][j];
            printf("%d\t", matriz_soma[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < n_linhas; i++) {
        free(ponteiro1[i]); //libera cada linha
        free(ponteiro2);
    }

    free(ponteiro1); //libera o vetor de ponteiros
    free(ponteiro2);

    return 0;

}