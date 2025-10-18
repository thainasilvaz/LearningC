#include <stdio.h>

int main(){

    
    int matriz[3][3];

    printf("Digite os elementos da matriz 3x3: \n");

    for(int i = 0; i < 3; i++){ //linhas
        for(int j =0; j < 3; j++){ //colunas
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]); //o \t cria um espaçamento entre os caracteres, como o "tab" do teclado
        }

        printf("\n");
    }

    return 0;

}