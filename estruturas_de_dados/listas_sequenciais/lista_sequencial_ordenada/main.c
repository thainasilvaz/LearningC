#include <stdio.h>
#include "lista_estatica_ordenada.c"

int main(){

    Lista minhalista;

    criar_lista(&minhalista);
    inserir_elemento(&minhalista, 10);
    inserir_elemento(&minhalista, 5);
    inserir_elemento(&minhalista, 28);
    inserir_elemento(&minhalista, 7);
    imprimir_lista(&minhalista);
}