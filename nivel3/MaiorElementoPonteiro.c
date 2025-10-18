#include <stdio.h>


int maiorElemento(int numeros[], int tamanho){ //int numeros[] é o mesmo que int *numeros -> quando um vetor é passado como parametro para uma funcao o nome do vetor é convertido para um ponteiro para o primeiro elemento do vetor.

    int *ponteiro = numeros; //ponteiro que irá percorrer o vetor (recebe o endereço do primeiro elemento)
    int maior_elemento = *ponteiro; //o primeiro elemento é o maior inicialmente (maior = o valor guardado no endereço apontado pelo ponteiro)   

    /*
    vetor[i] é uma forma abreviada de *(vetor + i)
    
    ponteiro -> endereço do primeiro elemento
    ponteiro + 1 -> endereço do segundo elemento (somar  1 a um ponteiro de int faz o ponteiro avançar para o próximo inteiro na memória, não apenas 1 byte)
    ponteiro + 2 -> endereço do terceiro elemento
    *(ponteiro + i) -> valor armazenado nesse endereço
    
    */

    for (int i = 0; i < tamanho; i++){
        if(*(ponteiro + i) > maior_elemento){
            maior_elemento = *(ponteiro + i);
        }
    }

    return maior_elemento;

}

int main(){

    int numeros[5];

    printf("Digite 5 numeros inteiros para adicionar ao vetor: \n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &numeros[i]);
    }

    int maior_elemento = maiorElemento(numeros, 5); //parametros: vetor e o tamanho dele -> no lugar de numeros, o que esta sendo passado na verdade é &numeros[0] (endereço do primeiro elemento).

    printf("O maior elemento do vetor eh %d\n", maior_elemento);

    return 0;
}