#include <stdio.h>
#include "lista_sequencial.h" // inclui o cabeçalho
#include <stdbool.h>


void criar_lista(Lista *lista) {  //l é um ponteiro para a variavel do tipo Lista -> a função recebe o endereço de uma estrutura Lista, e não uma cópia dela (sem o * a função receberia uma cópia da lista, e qualquer alteração se perderia ao sair da função)
    lista->tamanho = 0; //é o mesmo que (*lista).tamanho = 0 -> define uma lista vazia (0 elementos) -> "acesse o campo tamanho da estrutura para onde l aponta" -> obs: "->" é usado quando temos um ponteiro para uma struct
}


void inserir_final(Lista *lista, int valor_inserir){
    if(lista->tamanho == MAX){
        printf("A lista está cheia.");
    }else{
        lista->elementos[lista->tamanho] = valor_inserir; //se tiver 3 elementos na lista: elementos[4] = posicaoinserir (pois se há quatro elementos, os indices são 0,1,2,3)
        lista->tamanho++;
    }
}

void imprimir_lista(Lista *lista){
    if(lista->tamanho == 0){
        printf("A lista esta vazia.");
    }
    else{
        printf(" Lista:");
        printf("\n");
        for(int i = 0; i <= lista->tamanho - 1; i++){
            printf(" %d ", lista->elementos[i]);
        }
    }
}

void tamanho_lista(Lista *lista){
    printf("\nO tamanho da lista eh: %d\n", lista->tamanho);
}

void remover_elemento(Lista *lista, int indice){
    
    for(int i = indice; i < lista->tamanho; i++){
        lista->elementos[i] = lista->elementos[i+1];
    }

    lista->tamanho--;
    
}

void buscar_elemento(Lista *lista, int elemento_procurado){

    bool encontrado = false;

    for(int i = 0; i < lista->tamanho; i++){
        if(lista->elementos[i] == elemento_procurado){
            printf("O elemento esta no indice %d.", i);
            encontrado = true;
            break; //sai do loop quando encontra
        }
    }

    if(!encontrado){
        printf("Erro: o elemento %d nao foi encontrado na lista.\n", elemento_procurado);
    }

}

void insere_meio(Lista *lista, int valor, int indice_insercao){
    
    for (int i = lista->tamanho; i > indice_insercao; i--) { //deslocando os elementos para a direita (de trás para frente)
        lista->elementos[i] = lista->elementos[i - 1];
    }

    lista->elementos[indice_insercao] = valor;
    lista->tamanho++;

    printf("Elemento %d inserido na posicao %d.\n", valor, indice_insercao);

}

void destroi_lista(Lista *lista){
	free(lista);
}
