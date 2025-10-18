#include <stdio.h>

int main(){

    int matriz[3][3];

    printf("Digite os valores inteiros para a matriz 3x3: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da diagonal principal da matriz digitada: \n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                printf("%d\t", matriz[i][j]);
            }
        }
    }

}