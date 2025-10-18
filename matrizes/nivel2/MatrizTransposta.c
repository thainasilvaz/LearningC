#include <stdio.h>

/*
matriz transposta: linhas viram colunas

se a matriz original tem m linhas e n colunas, a sua transposta terá n linhas e m colunas

a primeira linha da matriz original se torna a primeira coluna da transposta, a segunda linha vira a segunda coluna, e assim por diante
*/

int main(){

    int matriz[3][2];
    int matriz_transposta[2][3];

    printf("Digite os valores inteiros para a matriz 3x2: \n");

    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 2; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz transposta: \n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            matriz_transposta[i][j] = matriz[j][i];
            printf("%d\t", matriz_transposta[i][j]);
        }   
        printf("\n");
    }


}