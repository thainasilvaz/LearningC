#include <stdio.h>
#include "lista_ligada.c"

int main(){

    ListaLigada *lista = NULL; //inicializando lista

    lista = inserirFinal(lista, 10); //atribuindo o retorno da funcao inserirFinal à variavel lista
    lista = inserirFinal(lista, 20);
    lista = inserirFinal(lista, 30);
    imprimirLista(lista);
    lista = inserirInicio(lista, 35);
    imprimirLista(lista); 
    int tamanho = tamanhoLista(lista);
    printf("A lista possui %d elementos.", tamanho);
    destruirLista(lista);   

    return 0;
}
