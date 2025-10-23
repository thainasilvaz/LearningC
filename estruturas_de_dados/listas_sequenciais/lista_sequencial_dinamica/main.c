#include <stdio.h>
#include "lista_sequencial_dinamica.c"

int main(){

    Lista minhalista;

    criar_lista(&minhalista);
    inserir_final(&minhalista, 20);
    inserir_final(&minhalista, 30);
    inserir_final(&minhalista, 40);
    imprimir_lista(&minhalista);
    buscar_elemento(&minhalista, 40);
    //buscar_elemento(&minhalista, 50);
    remover_elemento(&minhalista, 20);
    imprimir_lista(&minhalista);
    destruir_lista(&minhalista);

    return 0;
}