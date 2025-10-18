#include <stdio.h>


int main(){

    int matriz[3][3];
    int linha_maior;
    int coluna_maior;

    printf("Digite os valores inteiros para a matriz 3x3: \n");

    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nExibindo o maior valor e a posicao dele na matriz 3x3 digitada: \n");

    int maior = matriz[0][0];//primeiro valor da matriz começa sendo o maior (matriz[0][0])

    for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("O maior valor da matriz digitada eh %d .\n", maior);
    printf("A posicao desse valor eh [%d][%d].", linha_maior, coluna_maior);

}