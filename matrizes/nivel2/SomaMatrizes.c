#include <stdio.h>

int main(){

    int matriz1[2][2];
    int matriz2[2][2];
    int matriz_soma[2][2];

    printf("Digite os valores inteiros para a primeira matriz 2x2: \n");

    for(int i = 0; i < 2; i++){ 
        for(int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os valores inteiros para a segunda matriz 2x2: \n");

    for(int i = 0; i < 2; i++){ 
        for(int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("Matriz soma: \n");
    for(int i = 0; i < 2; i++){ 
        for(int j = 0; j < 2; j++){
            matriz_soma [i][j] = matriz1[i][j] + matriz2[i][j];
            printf("%d\t", matriz_soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}