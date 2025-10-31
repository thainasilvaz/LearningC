/*
1. Implemente uma função buscaLinear() e uma buscaBinaria().
Compare quantas vezes cada uma percorre o vetor.
*/

#include <stdio.h>

int buscaLinear(int vetor[], int tamanho, int alvo){

    for(int i = 0; i <= tamanho - 1; i++){
        if(alvo == vetor[i]){
            return i;
        }
    }

    return -1; //só é possível afirmar que o elemento não está no vetor depois que o loop inteiro terminou

}

int buscaBinaria(int vetor[], int tamanho, int alvo){

    int inicio = 0;
    int fim = tamanho - 1;

    while(inicio <= fim){
        int meio = (inicio + fim) / 2;

        if(vetor[meio] == alvo){
            return meio;
        }
        else if(vetor[meio] < alvo){
            inicio = meio + 1; //metade da direita
        }
        else{
            fim = meio - 1; //metade da esquerda
        }
    }

    return -1;

}

int main(){

    int vetor[] = {2, 4, 6, 8, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int alvo = 10;

    int resultado_sequencial = buscaLinear(vetor, tamanho, alvo);
    int resultado_bbn = buscaBinaria(vetor, tamanho, alvo);

    if (resultado_sequencial == -1){
        printf("O elemento %d nao foi encontrado no vetor. \n", alvo);
    }
    else{
        printf("O elemento %d foi encontrado na posicao %d do vetor. \n", alvo, resultado_sequencial);
    }

    if (resultado_bbn == -1){
        printf("O elemento %d nao foi encontrado no vetor. \n", alvo);
    }
    else{
        printf("O elemento %d foi encontrado na posicao %d do vetor. \n", alvo, resultado_bbn);
    }

}

/*

Número de vezes que a busca sequencial percorre o vetor:
- melhor caso: o alvo está na primeira posição -> o loop roda 1 vez
- pior caso: o alvo não está no vetor ou está na última posição -> o loop percorre todas as posições (5 vezes no caso do vetor utilizado)
- caso médio: se o alvo estiver igualmente provável em qualquer posição, percorre em média 5 / 2 vezes.


Número de vezes que a busca binária percorre o vetor: 
- melhor caso: o alvo está no meio do vetor -> 1 iteração
- pior caso: o alvo está ausente ou nas extremidades -> log2(tamanho do vetor) -> nesse caso log2(5) ≈ 2,32

*/