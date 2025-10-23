#include "lista_estatica_ordenada.h"
#include <stdio.h>

void criar_lista(Lista *lista){
    lista->tamanho = 0;
}

void imprimir_lista(Lista *lista){

    if(lista->tamanho == 0){
        printf("A lista esta vazia.\n");
    }else{
        printf("\nLista: \n");
        for(int i = 0; i < lista->tamanho; i++){
            printf("%d", lista->elementos[i]);
            printf(" ");
        }
    }
}

void inserir_elemento(Lista *lista, int elemento){

    int i = 0;

    while(i < lista->tamanho && lista->elementos[i] < elemento){
        i++;
    }

    for(int j = lista->tamanho; j > i; j--){
        lista->elementos[j] = lista->elementos[j-1]; //deslocando elementos para a direita (para abrir espaço)
    }

    lista->elementos[i] = elemento; //inserindo valor na posicao correta
    lista->tamanho++;

    printf("Elemento %d inserido na posicao %d.\n", elemento, i);
}

