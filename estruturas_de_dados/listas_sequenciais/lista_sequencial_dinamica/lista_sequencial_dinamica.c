#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista_sequencial_dinamica.h"

void criar_lista(Lista *lista){

    lista->tamanho = 0; //começa com zero elementos
    lista->elementos = (int *)malloc(sizeof(int)); //alocando espaço para um inteiro

}

void inserir_final(Lista *lista, int valor){

    lista->elementos = realloc(lista->elementos, (lista->tamanho + 1) * sizeof(int)); //alocando espaço para mais um inteiro 

    if (lista->elementos == NULL) {
        printf("Erro ao realocar memoria.\n");
        exit(1);
    }

    lista->elementos[lista->tamanho] = valor;
    lista->tamanho++;
    
}

void imprimir_lista(Lista *lista){

    printf("Lista: \n");

    for(int i = 0; i < lista->tamanho; i++){
        printf("%d", lista->elementos[i]);
        printf(" ");
    }

}

void buscar_elemento(Lista *lista, int elemento){

    bool encontrado = false;
    
    for(int i = 0; i < lista->tamanho; i++){
        if(lista->elementos[i] == elemento){
            printf("\nO elemento %d foi encontrado na posicao %d.\n", elemento, i);
            encontrado = true;
            break;
        }
    }

    if (encontrado == false){
        printf("\nO elemento %d nao foi encontrado na lista.\n", elemento);
    }
}

void destruir_lista(Lista *lista){
    free(lista->elementos);
    lista->tamanho = 0;
}

void remover_elemento(Lista *lista, int elemento){

    bool encontrado = false; //poderia ser int encontrado = 0 -> quando for encontrado: encontrado = 1;

    for(int i = 0; i < lista->tamanho; i++){
        if(lista->elementos[i] == elemento){
            encontrado = true;
            break;
        }
    }

    if(encontrado){
        for(int i = 0; i < lista->tamanho - 1; i++){
            lista->elementos[i] = lista->elementos[i+1];
        }
        lista->tamanho--; //diminui em 1 elemento o tamanho da lista
    }else{
        printf("\nO elemento %d nao foi encontrado na lista.\n", elemento);
    }

}