#include <stdio.h>

int main(){

    int matriz[3][3];
    int soma_matriz = 0;

    printf("Digite os valores inteiros para a matriz 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma_matriz = soma_matriz + matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos da matriz 3x3 eh %d.", soma_matriz);

}