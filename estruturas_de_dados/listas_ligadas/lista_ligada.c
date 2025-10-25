#include <stdio.h>
#include "lista_ligada.h"
#include <stdlib.h> //para malloc e free

ListaLigada* inserirFinal(ListaLigada* first_no, int novo_valor){ //first_no é um ponteiro para o primeiro nó da lista -> indica onde a lista começa

    ListaLigada *lista = (ListaLigada*)malloc(sizeof(ListaLigada)); //cria um novo nó na memoria

    lista->valor = novo_valor;
    lista->proximo = NULL; //no momento não sabemos qual será o próximo nó -> ex: lista --> [10] --> [20] --> [30] --> NULL

    if (first_no == NULL) {
        return lista; // lista vazia, novo nó é será o primeiro nó
    }

    //se a lista não estiver vazia
    ListaLigada *temp = first_no; //temp começa no primeiro nó
    while (temp->proximo != NULL) {
        temp = temp->proximo; //percorrendo a lista até chegar no último nó
    }
    temp->proximo = lista; //ligando o ultimo nó ao novo nó

    return first_no; //retorna o primeiro nó

}


void imprimirLista(ListaLigada *lista){ 

    ListaLigada* atual = lista; //começando pelo primeiro nó
   
    if (atual == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }

    printf("Elementos da lista: ");
    while (atual != NULL) { 
        printf("%d ", atual->valor);
        atual = atual->proximo; //avança para o próximo nó
    }
    printf("\n");

}

void destruirLista(ListaLigada *lista){

    ListaLigada* atual = lista; //começando pelo primeiro nó
    ListaLigada* proximo; // ponteiro auxiliar

    while (atual != NULL) {
        proximo = atual->proximo; // guarda o próximo nó
        free(atual); // libera o nó atual
        atual = proximo; // avança para o próximo nó
    }
}

ListaLigada* inserirInicio(ListaLigada *lista, int novo_valor){

    ListaLigada *novo_no = (ListaLigada*)malloc(sizeof(ListaLigada)); //cria um novo nó na memoria

    if (novo_no == NULL) {
        printf("Erro ao alocar memória.\n");
        return lista;
    }

    novo_no->valor = novo_valor;
    novo_no->proximo = lista; //fazendo o novo nó apontar para o antigo primeiro nó

    return novo_no;

}

int tamanhoLista(ListaLigada *lista){

    int tamanho = 0;

    while (lista != NULL) {
        tamanho++;
        lista = lista->proximo; // avança para o próximo nó
    }

    return tamanho;

}