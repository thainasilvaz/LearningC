#include <stdio.h>

//o bubble sort compara pares de elementos adjacentes e os troca se estiverem fora de ordem

void bubbleSort(int vetor[], int quant_elementos){

    int temp; //variavel auxiliar

    for(int i = 0; i < quant_elementos - 1; i++){ //controla a passagem pelo array
        for(int j = 0; j < quant_elementos - i - 1; j++){ //loop para comparar e trocar elementos adjacentes
            if(vetor[j] > vetor[j+1]){ //se quisesse ordem decrescente apenas trocaria > por <
                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main(){

    int vetor[] = {5, 2, 8, 1, 3};
    int quant_elementos = 5;

    bubbleSort(vetor, quant_elementos);

    printf("Vetor ordenado: \n");
    for(int i = 0; i < quant_elementos; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}